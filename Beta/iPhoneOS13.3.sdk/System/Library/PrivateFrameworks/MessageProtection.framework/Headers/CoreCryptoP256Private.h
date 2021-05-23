/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreCryptoP256Private : NSObject

{
    struct ccec_full_ctx *_full_key;
}

@property struct ccec_full_ctx *full_key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)generate;

- (void)dealloc;
- (id)initWithKey:(struct ccec_full_ctx *)arg1;
- (id)publicKey;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)keychainData;
- (id)keyAgreement:(id)arg1 error:(id *)arg2;

@end
