/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, _SFECPublicKey;

@interface SFIESCiphertext_Ivars : NSObject

{
    _SFECPublicKey *ephemeralSenderPublicKey;
    NSData *authenticationCode;
}

@end
