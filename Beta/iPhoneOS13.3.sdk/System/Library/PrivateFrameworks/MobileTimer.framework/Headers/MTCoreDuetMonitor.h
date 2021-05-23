/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol MTAlarmStorage, OS_dispatch_queue;

@interface MTCoreDuetMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MTAlarmStorage> _alarmStorage;
    NSMutableDictionary *_alarmStatesByAlarmID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) id <MTAlarmStorage> alarmStorage;
@property (nonatomic, readonly) NSMutableDictionary *alarmStatesByAlarmID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1;
- (void)_queue_writeCurrentStateToContextStore;
- (void)updateStateForAlarms:(id)arg1;
- (void)_queue_clearPreviouslyDismissedAlarmStates;
- (void)handleSystemReady;

@end
