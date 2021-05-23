/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthWrapCodableMessageHeader, NSMutableData, NSOutputStream, NSUUID;

__attribute__((visibility("hidden")))
@interface HKHealthWrapEncryptor : NSObject

{
    NSOutputStream *_outputStream;
    struct __SecCertificate *_certificate;
    unsigned int _algorithm;
    unsigned int _options;
    unsigned int _keySize;
    struct _CCCryptor *_cryptor;
    unsigned int _hmacAlgorithm;
    struct {
        unsigned int ctx[96];
    } _hmacContext;
    struct CC_SHA256state_st _sha256Context;
    NSMutableData *_buffer;
    NSUUID *_studyUUID;
    NSUUID *_uuid;
    HKHealthWrapCodableMessageHeader *_header;
    _Bool _compressionEnabled;
    unsigned long long _encryptedBytesCount;
}

- (void)dealloc;
- (_Bool)startWithError:(id *)arg1;
- (id)initWithOutputStream:(id)arg1 certificate:(struct __SecCertificate *)arg2 algorithm:(unsigned int)arg3 options:(unsigned int)arg4 keySize:(unsigned int)arg5 uuid:(id)arg6 studyUUID:(id)arg7 compressionEnabled:(_Bool)arg8;
- (_Bool)appendData:(id)arg1 error:(id *)arg2;
- (_Bool)finalizeWithError:(id *)arg1;
- (struct __SecKey *)_copyAndVerifyPublicKeyFromCertificate:(struct __SecCertificate *)arg1 error:(id *)arg2;
- (id)_encryptData:(id)arg1 withCertificate:(struct __SecCertificate *)arg2 error:(id *)arg3;
- (_Bool)_updateHeaderWithKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 error:(id *)arg4;
- (_Bool)_startCryptorWithError:(id *)arg1;
- (_Bool)_writeStream:(const char *)arg1 length:(unsigned long long)arg2 hash:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_appendEncryptedBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_updateCryptorWithData:(id)arg1 error:(id *)arg2;
- (_Bool)_finalizeCryptorWithError:(id *)arg1;

@end
