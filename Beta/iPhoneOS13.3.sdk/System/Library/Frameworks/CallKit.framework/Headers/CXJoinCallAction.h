/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class CXHandle, NSDate, NSSet, NSString, NSUUID;

@interface CXJoinCallAction : CXCallAction

{
    _Bool _videoEnabled;
    _Bool _uplinkMuted;
    _Bool _shouldSuppressInCallUI;
    _Bool _wantsStagingArea;
    _Bool _upgrade;
    NSUUID *_groupUUID;
    NSSet *_remoteMembers;
    CXHandle *_callerID;
    NSUUID *_upgradeSessionUUID;
    NSUUID *_messagesGroupUUID;
    NSString *_messagesGroupName;
    NSDate *_dateStarted;
}

@property (copy, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSDate *dateStarted;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) CXHandle *callerID;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property (nonatomic) _Bool shouldSuppressInCallUI;
@property (nonatomic) _Bool wantsStagingArea;
@property (nonatomic, getter=isUpgrade) _Bool upgrade;
@property (copy, nonatomic) NSUUID *upgradeSessionUUID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)fulfillWithDateStarted:(id)arg1;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (id)initWithCallUUID:(id)arg1 groupUUID:(id)arg2;

@end
