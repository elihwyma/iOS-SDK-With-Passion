/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData, _SFECPublicKey;

@interface _SFIESCiphertext : _SFCiphertext

{
    id _iesCiphertextInternal;
}

@property (readonly) _SFECPublicKey *ephemeralSenderPublicKey;
@property (readonly) NSData *authenticationCode;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3;

@end
