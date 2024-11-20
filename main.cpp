#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int ArgC, char **ArgV) {

  // 打开文件 a.o，以二进制模式写入
  std::ofstream OutFile("a.o", std::ios::binary);

  // 检查文件是否打开成功
  if (!OutFile) {
    std::cerr << "Error opening file!" << std::endl;
    return 1;
  }

  // 要写入的字节数据
  unsigned char Bytes[] = {0x01, 0x02, 0x03, 0x04};

  // 写入字节到文件中
  OutFile.write(reinterpret_cast<const char *>(Bytes), sizeof(Bytes));

  // 关闭文件
  OutFile.close();

  return 0;
}
