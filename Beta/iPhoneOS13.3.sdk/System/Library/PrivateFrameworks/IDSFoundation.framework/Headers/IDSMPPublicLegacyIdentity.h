/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

#import <IDSFoundation/Swift-Protocol.h>

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <Swift>

@property (nonatomic, readonly) struct _SecMPPublicIdentity *publicIdentity;

+ (_Bool)supportsSecureCoding;
+ (id)identityWithData:(id)arg1 error:(id *)arg2;
+ (struct _SecMPPublicIdentity *)_createPublicIdentityFromData:(id)arg1 error:(id *)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id *)arg3;
- (id)initWithPublicIdentity:(struct _SecMPPublicIdentity *)arg1;

@end
