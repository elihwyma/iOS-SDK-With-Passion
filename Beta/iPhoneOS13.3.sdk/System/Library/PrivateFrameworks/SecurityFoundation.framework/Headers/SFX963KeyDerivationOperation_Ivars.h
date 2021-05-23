/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@protocol SFDigestOperation, SFKeyDerivingOperation;

@interface SFX963KeyDerivationOperation_Ivars : NSObject

{
    id <SFKeyDerivingOperation> sharedSecretOperation;
    id <SFDigestOperation> digestOperation;
}

@end
