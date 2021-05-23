/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, NSUUID, SPHandle;

@interface SPCommand : NSObject

{
    _Bool _enableLostMode;
    NSUUID *_identifier;
    NSUUID *_beaconIdentifier;
    long long _type;
    NSDate *_expiration;
    NSNumber *_duration;
    SPHandle *_handle;
    NSString *_lostModeMessage;
    NSString *_lostModePhoneNumber;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *expiration;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) SPHandle *handle;
@property (copy, nonatomic) NSString *lostModeMessage;
@property (copy, nonatomic) NSString *lostModePhoneNumber;
@property (nonatomic) _Bool enableLostMode;
@property (copy, nonatomic, readonly) NSString *taskName;

+ (_Bool)supportsSecureCoding;
+ (id)enableNotifyWhenFound:(id)arg1;
+ (id)disableNotifyWhenFound:(id)arg1;
+ (id)locate:(id)arg1;
+ (id)startNotifyWhenFound:(id)arg1;
+ (id)stopNotifyWhenFound:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 identifier:(id)arg8;

@end
