/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData

{
    NSString *_inviteeUserID;
    NSString *_inviteeName;
    NSUUID *_inviteeUUID;
}

@property (copy, nonatomic) NSString *inviteeName;
@property (copy, nonatomic, readonly) NSString *inviteeUserID;
@property (copy, nonatomic, readonly) NSUUID *inviteeUUID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 inviteeUserID:(id)arg2 inviteeName:(id)arg3 invitationState:(long long)arg4 expiryDate:(id)arg5;

@end
