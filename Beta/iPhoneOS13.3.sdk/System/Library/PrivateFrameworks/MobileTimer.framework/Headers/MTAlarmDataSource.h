/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarm, MTAlarmManager, MTObserverStore, NSMutableArray;

@interface MTAlarmDataSource : NSObject

{
    MTAlarmManager *_alarmManager;
    MTObserverStore *_observers;
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
}

@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;

- (void)dealloc;
- (void)_registerForNotifications;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)addAlarm:(id)arg1;
- (id)removeAlarm:(id)arg1;
- (id)updateAlarm:(id)arg1;
- (id)initWithAlarmManager:(id)arg1;
- (void)_iterateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleAlarmNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_stateReset;
- (id)reloadAlarms;
- (unsigned long long)rowForAlarmWithID:(id)arg1;
- (unsigned long long)rowForAlarm:(id)arg1;
- (unsigned long long)numberOfAlarms;
- (id)alarmAtRow:(unsigned long long)arg1;

@end
