/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFUnfairLock, HMHome, HMHomeInvitationData, NSDate, NSString, NSURL, NSUUID, _HMContext;

@interface HMHomeInvitation : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    HMHome *_home;
    NSURL *_homeObjectURL;
    _HMContext *_context;
    HMHomeInvitationData *_invitationData;
}

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMHomeInvitationData *invitationData;
@property (weak, nonatomic) HMHome *home;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long invitationState;
@property (nonatomic, readonly) NSURL *homeObjectURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateInvitationState:(long long)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;

@end
