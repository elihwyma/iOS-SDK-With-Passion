/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

@class IDSMPPublicAccountIdentity;

@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity

@property (nonatomic, readonly) IDSMPPublicAccountIdentity *publicAccountIdentity;

- (id)dataRepresentationWithError:(id *)arg1;
- (_Bool)isParentOfCluster:(id)arg1;

@end
