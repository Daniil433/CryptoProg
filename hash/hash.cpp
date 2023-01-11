#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/files.h>
#include <cryptopp/filters.h>
#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h>
using namespace CryptoPP;
using namespace std;
int main(int argc, char **argv)
{
  string Hash;
  Weak::MD5 hash;
  FileSource("test.txt", true, new HashFilter(hash, new HexEncoder(new StringSink (Hash))));
  cout<<Hash<<endl;
  return 0;
}
