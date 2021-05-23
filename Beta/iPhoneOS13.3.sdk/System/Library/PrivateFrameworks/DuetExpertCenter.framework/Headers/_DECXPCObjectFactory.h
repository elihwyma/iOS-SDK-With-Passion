/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@interface _DECXPCObjectFactory : NSObject

{
    unsigned long long _priorityLevel;
    unsigned long long _allowBattery;
    _Bool _repeating;
    _Bool _requireScreenSleep;
    _Bool _requireClassC;
    _Bool _requireClassA;
    long long _intervalHours;
    long long _intervalMinutes;
    long long _intervalSeconds;
}

@property (nonatomic) long long intervalHours;
@property (nonatomic) long long intervalMinutes;
@property (nonatomic) long long intervalSeconds;
@property (nonatomic) _Bool repeating;
@property (nonatomic) _Bool requireScreenSleep;
@property (nonatomic) _Bool requireClassC;
@property (nonatomic) _Bool requireClassA;

- (id)init;
- (void)setPriorityLevelMaintenance;
- (id)getXPCObject;
- (long long)_getInterval;
- (const char *)_activityPriority;
- (_Bool)_shouldAllowBattery;
- (void)setPriorityLevelUtility;
- (void)allowBattery;
- (void)disallowBattery;

@end
