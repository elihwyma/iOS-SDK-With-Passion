/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFCiphertext.h>

@interface SFWrappedKeyCiphertext : _SFCiphertext

{
    id _wrappedKeyCiphertextInternal;
}

@property (readonly) _SFCiphertext *ciphertextKey;

- (id)initWithCiphertext:(id)arg1 ciphertextKey:(id)arg2;

@end
