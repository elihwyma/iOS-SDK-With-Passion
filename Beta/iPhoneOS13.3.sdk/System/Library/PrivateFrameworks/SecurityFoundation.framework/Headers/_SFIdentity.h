/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class SFIdentityAttributes, _SFCertificate, _SFKeyPair, _SFPublicKey;

@interface _SFIdentity : NSObject

{
    id _identityInternal;
}

@property (retain, nonatomic) _SFCertificate *certificate;
@property (nonatomic, readonly) _SFPublicKey *publicKey;
@property (retain, nonatomic) _SFKeyPair *keyPair;
@property (nonatomic, readonly) SFIdentityAttributes *attributes;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicKey:(id)arg1 certificate:(id)arg2;
- (id)initWithKeyPair:(id)arg1 certificate:(id)arg2;
- (id)initWithPublicKey:(id)arg1;
- (id)initWithKeyPair:(id)arg1;

@end
