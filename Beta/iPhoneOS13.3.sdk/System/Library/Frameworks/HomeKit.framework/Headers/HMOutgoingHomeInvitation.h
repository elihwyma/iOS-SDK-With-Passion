/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMHomeInvitation.h>

@class HMMutableArray, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation

{
    HMMutableArray *_accessoryInvitations;
    HMUser *_invitee;
}

@property (nonatomic, readonly) HMUser *invitee;
@property (nonatomic, readonly) NSArray *accessoryInvitations;

+ (_Bool)supportsSecureCoding;
+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;

@end
