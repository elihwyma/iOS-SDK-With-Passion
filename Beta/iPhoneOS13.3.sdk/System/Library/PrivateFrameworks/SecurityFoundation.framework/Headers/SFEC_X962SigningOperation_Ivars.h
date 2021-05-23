/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class _SFECKeySpecifier;

@protocol SFDigestOperationInternal;

@interface SFEC_X962SigningOperation_Ivars : NSObject

{
    _SFECKeySpecifier *keySpecifier;
    id <SFDigestOperationInternal> digestOperation;
}

@end
