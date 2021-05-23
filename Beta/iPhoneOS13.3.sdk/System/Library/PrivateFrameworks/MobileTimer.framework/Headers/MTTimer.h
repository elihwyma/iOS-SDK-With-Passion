/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class MTSound, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@protocol MTTimerTime;

@interface MTTimer : NSObject <Swift>

{
    NSUUID *_timerID;
    unsigned long long _state;
    double _duration;
    NSDate *_firedDate;
    NSDate *_lastModifiedDate;
    NSDate *_dismissedDate;
    NSString *_title;
    MTSound *_sound;
    id <MTTimerTime> _fireTime;
    NSDictionary *_siriContext;
    CDUnknownBlockType _currentDateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *timerID;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *siriContext;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic) id <MTTimerTime> fireTime;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;
@property (copy, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *dismissedDate;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider;
@property (nonatomic, readonly) NSString *timerIDString;
@property (nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, readonly) NSUUID *timerID;
@property (nonatomic, readonly) NSURL *timerURL;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly, getter=isFiring) _Bool firing;
@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) _Bool hasDefaultTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)currentTimerFromTimers:(id)arg1;
+ (_Bool)stateChangeIsAllowableFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
+ (id)descriptionForState:(unsigned long long)arg1;
+ (id)_timerTimeForState:(unsigned long long)arg1 remainingTime:(double)arg2 currentDateProvider:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)_setDuration:(double)arg1;
- (id)_initCommon;
- (_Bool)shouldBeScheduled;
- (id)upcomingTriggersAfterDate:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 duration:(double)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (id)timerByRestarting;
- (id)initWithState:(unsigned long long)arg1 duration:(double)arg2;
- (id)nextTriggerAfterDate:(id)arg1;
- (id)nextTrigger;
- (id)initFromDeserializer:(id)arg1;
- (void)serializeWithSerializer:(id)arg1;
- (void)setFiring:(_Bool)arg1;
- (_Bool)isEqualIgnoringLastModifiedDate:(id)arg1;
- (id)timerByUpdatingWithState:(unsigned long long)arg1;
- (_Bool)isCurrentTimer;
- (_Bool)isEqualToTimer:(id)arg1;
- (_Bool)_isEqualToTimer:(id)arg1 checkLastModified:(_Bool)arg2;
- (void)_copyStateOntoTimer:(id)arg1;

@end
