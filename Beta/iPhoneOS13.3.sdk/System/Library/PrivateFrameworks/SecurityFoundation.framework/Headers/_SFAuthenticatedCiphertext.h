/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext

{
    id _authenticatedCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) NSData *initializationVector;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3;

@end
