/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUCryptoKey : NSObject

{
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
    NSString *_passphrase;
}

@property (nonatomic, readonly) NSString *passphrase;

- (void)dealloc;
- (int)keyType;
- (const char *)keyData;
- (unsigned long long)keyLength;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (unsigned int)iterationCount;
- (id)saltData;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;

@end
