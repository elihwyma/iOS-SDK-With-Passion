/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class _SFECKeyPair, _SFECPublicKey;

@interface SFECDHKeySource_Ivars : NSObject

{
    _SFECKeyPair *localKeyPair;
    _SFECPublicKey *remotePublicKey;
}

@end
