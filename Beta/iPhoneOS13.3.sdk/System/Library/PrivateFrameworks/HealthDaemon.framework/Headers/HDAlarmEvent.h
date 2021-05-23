/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone;

@interface HDAlarmEvent : NSObject

{
    NSString *_clientIdentifier;
    NSString *_eventIdentifier;
    NSDate *_dueDate;
    NSDateComponents *_dueDateComponents;
    unsigned long long _eventOptions;
    NSTimeZone *__unitTest_localTimeZoneOverride;
}

@property (copy, nonatomic) NSTimeZone *_unitTest_localTimeZoneOverride;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSString *eventIdentifier;
@property (copy, nonatomic, readonly) NSDate *dueDate;
@property (copy, nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (copy, nonatomic, readonly) NSDate *currentDueDate;
@property (nonatomic, readonly) unsigned long long eventOptions;
@property (nonatomic, readonly) _Bool requiresDeviceUnlocked;
@property (nonatomic, readonly) _Bool requiresDeviceOnWrist;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)localTimeZone;
- (id)_initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 dueDateComponents:(id)arg4 eventOptions:(unsigned long long)arg5;
- (id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 eventOptions:(unsigned long long)arg4;
- (id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDateComponents:(id)arg3 eventOptions:(unsigned long long)arg4;

@end
