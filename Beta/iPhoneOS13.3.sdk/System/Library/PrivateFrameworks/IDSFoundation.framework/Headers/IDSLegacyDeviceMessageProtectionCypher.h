/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPPublicLegacyIdentity, NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject

{
    IDSMPPublicLegacyIdentity *_publicIdentity;
}

@property (nonatomic, readonly) IDSMPPublicLegacyIdentity *publicIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)cypherWithEndpoint:(id)arg1 error:(id *)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicIdentity:(id)arg1;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id *)arg5;
- (id)_fullIdentityFromAccountIdentity:(id)arg1 error:(id *)arg2;

@end
