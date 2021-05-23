/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFSymmetricKey.h>

@interface SFTripleDESKey : _SFSymmetricKey

{
    id _tripleDESKeyInternal;
}

- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id *)arg2;

@end
