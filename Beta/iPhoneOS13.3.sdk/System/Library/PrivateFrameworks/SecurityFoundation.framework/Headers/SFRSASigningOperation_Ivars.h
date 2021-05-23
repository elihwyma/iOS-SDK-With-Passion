/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class _SFRSAKeySpecifier;

@protocol SFDigestOperation;

@interface SFRSASigningOperation_Ivars : NSObject

{
    _SFRSAKeySpecifier *keySpecifier;
    id <SFDigestOperation> digestOperation;
}

@end
