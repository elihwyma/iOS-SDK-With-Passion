/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPPublicAccountIdentity, IDSMPPublicServiceIdentityAdmin, IDSMPPublicServiceIdentitySigning, NSString;

@interface IDSPublicAccountIdentity : NSObject

{
    IDSMPPublicAccountIdentity *_accountIdentity;
    IDSMPPublicServiceIdentityAdmin *_adminIdentity;
    IDSMPPublicServiceIdentitySigning *_signingIdentity;
}

@property (nonatomic, readonly) IDSMPPublicAccountIdentity *accountIdentity;
@property (nonatomic, readonly) IDSMPPublicServiceIdentityAdmin *adminIdentity;
@property (nonatomic, readonly) IDSMPPublicServiceIdentitySigning *signingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 adminIdentity:(id)arg2 signingIdentity:(id)arg3;

@end
