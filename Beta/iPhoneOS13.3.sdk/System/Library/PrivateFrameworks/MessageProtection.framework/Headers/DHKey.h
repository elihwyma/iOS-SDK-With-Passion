/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <MessageProtection/FullKey.h>

__attribute__((visibility("hidden")))
@interface DHKey : FullKey

- (id)description;
- (id)publicKey;
- (id)keyAgreementWithPublicKey:(id)arg1 error:(id *)arg2;

@end
