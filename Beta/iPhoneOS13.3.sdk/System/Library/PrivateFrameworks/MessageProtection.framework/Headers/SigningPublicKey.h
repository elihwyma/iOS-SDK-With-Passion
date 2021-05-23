/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <MessageProtection/PublicKey.h>

__attribute__((visibility("hidden")))
@interface SigningPublicKey : PublicKey

- (id)description;
- (_Bool)verifySignature:(id)arg1 ofData:(id)arg2;
- (_Bool)verifySignature:(id)arg1 formatter:(id)arg2;

@end
