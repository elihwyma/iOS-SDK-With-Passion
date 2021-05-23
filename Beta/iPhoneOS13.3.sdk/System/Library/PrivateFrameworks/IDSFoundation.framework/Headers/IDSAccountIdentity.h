/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPFullAccountIdentity, IDSMPFullAccountIdentityCluster, IDSMPFullServiceIdentityAdmin, IDSMPFullServiceIdentitySigning, IDSPublicAccountIdentity, NSString;

@interface IDSAccountIdentity : NSObject

{
    IDSMPFullAccountIdentityCluster *_identityCluster;
}

@property (nonatomic, readonly) IDSMPFullAccountIdentityCluster *identityCluster;
@property (nonatomic, readonly) IDSMPFullAccountIdentity *accountIdentity;
@property (nonatomic, readonly) IDSMPFullServiceIdentityAdmin *adminIdentity;
@property (nonatomic, readonly) IDSMPFullServiceIdentitySigning *signingIdentity;
@property (nonatomic, readonly) IDSPublicAccountIdentity *accountPublicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullCluster:(id)arg1;

@end
