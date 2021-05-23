/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

@class ENGroupID, IDSMPFullAccountIdentity, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity

{
    struct __SecKey *_publicKey;
}

@property (nonatomic, readonly) ENGroupID *groupID;
@property (nonatomic, readonly) IDSMPFullAccountIdentity *fullAccountIdentity;
@property (nonatomic, readonly) NSArray *fullServiceIdentitiesAdmin;
@property (nonatomic, readonly) NSArray *fullServiceIdentitiesSigning;
@property (nonatomic, readonly) struct __SecKey *publicKey;
@property (nonatomic, readonly) NSData *forwardingTicket;

+ (id)clusterWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)clusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id *)arg4;

- (id)dataRepresentationWithError:(id *)arg1;
- (id)adminServiceIdentityWithType:(long long)arg1;
- (id)signingServiceIdentityWithType:(long long)arg1;
- (id)signData:(id)arg1 withError:(id *)arg2;
- (id)publicAccountClusterWithError:(id *)arg1;
- (id)clusterByUpdatingGroupID:(id)arg1 error:(id *)arg2;
- (id)rolledClusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id *)arg4;
- (_Bool)isParentOfCluster:(id)arg1;

@end
