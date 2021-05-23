/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKeyPair.h>

@interface SFRSAKeyPair : _SFKeyPair

{
    id _rsaKeyPairInternal;
}

- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString *)arg2;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;

@end
