/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSData, NSString, SecKeyP256Public;

__attribute__((visibility("hidden")))
@interface SecKeyP256Private : NSObject

{
    NSData *_privateKeyBlob;
    SecKeyP256Public *_publicKey;
}

@property (nonatomic, readonly) NSData *privateKeyBlob;
@property (retain, nonatomic) SecKeyP256Public *publicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)generate;
+ (id)generateWithAccessControl:(struct __CFString *)arg1;
+ (const struct __CFString *)defaultProtectionClassForPlatform;

- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)keychainData;
- (id)keyAgreement:(id)arg1 error:(id *)arg2;
- (id)keyAgreement:(id)arg1 error:(id *)arg2 isRetry:(_Bool)arg3;
- (id)getPrivateKeyRefWithError:(id *)arg1;

@end
