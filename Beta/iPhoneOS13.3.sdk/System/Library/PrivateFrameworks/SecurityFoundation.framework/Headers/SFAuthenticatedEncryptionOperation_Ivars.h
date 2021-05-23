/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class _SFAESKeySpecifier;

@interface SFAuthenticatedEncryptionOperation_Ivars : NSObject

{
    _SFAESKeySpecifier *keySpecifier;
    long long authenticationMode;
    long long authenticationCodeLength;
}

@end
