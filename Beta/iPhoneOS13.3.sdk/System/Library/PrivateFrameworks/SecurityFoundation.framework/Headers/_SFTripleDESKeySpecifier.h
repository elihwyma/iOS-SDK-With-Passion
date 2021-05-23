/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFSymmetricKeySpecifier.h>

@interface _SFTripleDESKeySpecifier : _SFSymmetricKeySpecifier

{
    id _tripleDESKeySpecifierInternal;
}

+ (Class)keyClass;

- (long long)keyLengthInBytes;

@end
