/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFSymmetricKey.h>

@class _SFAESKeySpecifier;

@interface _SFAESKey : _SFSymmetricKey

{
    id _aesKeyInternal;
}

@property (copy, nonatomic, readonly) _SFAESKeySpecifier *keySpecifier;

- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id *)arg2;

@end
