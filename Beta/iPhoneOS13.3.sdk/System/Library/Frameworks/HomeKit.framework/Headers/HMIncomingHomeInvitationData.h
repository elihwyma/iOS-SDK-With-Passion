/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData

{
    NSString *_inviterUserID;
    NSString *_homeName;
    NSUUID *_homeUUID;
    NSString *_inviterName;
    NSUUID *_inviterUUID;
}

@property (copy, nonatomic) NSString *inviterName;
@property (nonatomic, readonly) NSString *inviterUserID;
@property (copy, nonatomic, readonly) NSString *homeName;
@property (copy, nonatomic, readonly) NSUUID *homeUUID;
@property (copy, nonatomic, readonly) NSUUID *inviterUUID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 inviterName:(id)arg3 invitationState:(long long)arg4 homeName:(id)arg5 homeUUID:(id)arg6 expiryDate:(id)arg7;

@end
