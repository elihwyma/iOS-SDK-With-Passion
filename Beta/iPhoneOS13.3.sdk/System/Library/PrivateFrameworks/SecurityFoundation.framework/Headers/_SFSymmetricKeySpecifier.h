/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFKeySpecifier.h>

@interface _SFSymmetricKeySpecifier : _SFKeySpecifier

{
    id _symmetricKeySpecifierInternal;
}

@property (nonatomic, readonly) long long keyLengthInBytes;

@end
