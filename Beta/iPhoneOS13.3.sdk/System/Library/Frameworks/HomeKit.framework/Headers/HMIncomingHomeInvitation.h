/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMHomeInvitation.h>

@class HMHomeManager, HMUser, NSString, NSUUID;

@interface HMIncomingHomeInvitation : HMHomeInvitation

{
    HMUser *_inviter;
    HMHomeManager *_homeManager;
}

@property (weak, nonatomic) HMHomeManager *homeManager;
@property (nonatomic, readonly) HMUser *inviter;
@property (copy, nonatomic, readonly) NSString *homeName;
@property (copy, nonatomic, readonly) NSUUID *homeUUID;

+ (_Bool)supportsSecureCoding;
+ (id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInvitationData:(id)arg1 homeManager:(id)arg2;
- (void)_acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;
- (void)acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
