/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@interface CUPairingStream : NSObject

{
    struct CryptoAEADPrivate *_decryptAEAD;
    unsigned char _decryptNonce[12];
    struct CryptoAEADPrivate *_encryptAEAD;
    unsigned char _encryptNonce[12];
    unsigned long long _authTagLength;
    NSString *_name;
}

@property (nonatomic) unsigned long long authTagLength;
@property (copy, nonatomic) NSString *name;

- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (_Bool)prepareWithName:(id)arg1 isClient:(_Bool)arg2 pskData:(id)arg3 error:(id *)arg4;
- (id)encryptData:(id)arg1 aadData:(id)arg2 error:(id *)arg3;
- (id)encryptData:(id)arg1 aadBytes:(const void *)arg2 aadLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)decryptData:(id)arg1 aadData:(id)arg2 error:(id *)arg3;
- (id)decryptData:(id)arg1 aadBytes:(const void *)arg2 aadLength:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)encryptInputBytes:(const void *)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void *)arg3 inputAADLength:(unsigned long long)arg4 outputBytes:(void *)arg5 outputAuthTagBytes:(void *)arg6 outputAuthTagLength:(unsigned long long)arg7 error:(id *)arg8;
- (_Bool)decryptInputBytes:(const void *)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void *)arg3 inputAADLength:(unsigned long long)arg4 inputAuthTagPtr:(const void *)arg5 inputAuthTagLength:(unsigned long long)arg6 outputBytes:(void *)arg7 error:(id *)arg8;

@end
