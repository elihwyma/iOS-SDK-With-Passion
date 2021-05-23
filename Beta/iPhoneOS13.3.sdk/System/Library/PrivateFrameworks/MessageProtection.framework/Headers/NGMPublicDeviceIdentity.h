/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NGMPublicPreKey, SigningPublicKey;

@interface NGMPublicDeviceIdentity : NSObject

{
    SigningPublicKey *_signingKey;
    NGMPublicPreKey *_prekey;
}

@property (retain, nonatomic) SigningPublicKey *signingKey;
@property (retain, nonatomic) NGMPublicPreKey *prekey;

+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id *)arg3;

- (id)description;
- (id)identityData;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id *)arg3;
- (id)prekeyData;
- (_Bool)verifySignature:(id)arg1 formatter:(id)arg2;
- (id)initWithPrekey:(id)arg1 signingKey:(id)arg2;
- (_Bool)isValidSigningDestination;

@end
