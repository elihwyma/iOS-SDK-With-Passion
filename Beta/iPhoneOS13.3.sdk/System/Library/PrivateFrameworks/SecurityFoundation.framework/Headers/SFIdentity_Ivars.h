/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class SFIdentityAttributes, _SFCertificate, _SFKeyPair, _SFPublicKey;

@interface SFIdentity_Ivars : NSObject

{
    _SFPublicKey *publicKey;
    _SFKeyPair *keyPair;
    _SFCertificate *certificate;
    SFIdentityAttributes *attributes;
}

@end
