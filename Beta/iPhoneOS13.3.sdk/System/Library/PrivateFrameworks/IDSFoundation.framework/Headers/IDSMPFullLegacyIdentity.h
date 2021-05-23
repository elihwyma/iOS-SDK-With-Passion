/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

#import <IDSFoundation/Swift-Protocol.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <Swift>

@property (nonatomic, readonly) struct _SecMPFullIdentity *fullIdentity;

+ (_Bool)supportsSecureCoding;
+ (id)identityWithData:(id)arg1 error:(id *)arg2;
+ (struct _SecMPFullIdentity *)_createFullIdentityFromData:(id)arg1 error:(id *)arg2;
+ (struct _SecMPFullIdentity *)_createFullIdentityWithError:(id *)arg1;
+ (struct _SecMPFullIdentity *)_createFullIdentityWithDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
+ (struct _SecMPPublicIdentity *)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity *)arg1 error:(id *)arg2;
+ (id)identityWithError:(id *)arg1;
+ (id)identityWithDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)publicIdentityWithError:(id *)arg1;
- (id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id *)arg3;
- (id)initWithFullIdentity:(struct _SecMPFullIdentity *)arg1;
- (id)protectedHashOfMessageData:(id)arg1 error:(id *)arg2;
- (unsigned int)dataProtectionClassWithError:(id *)arg1;
- (_Bool)updateIdentityToDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)purgeFromKeychain:(id *)arg1;
- (_Bool)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id *)arg2;

@end
