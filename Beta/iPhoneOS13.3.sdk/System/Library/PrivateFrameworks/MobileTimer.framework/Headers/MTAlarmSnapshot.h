/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTSnapshotScheduler.h>

@class MTAlarmStorage, NSString;

@interface MTAlarmSnapshot : MTSnapshotScheduler

{
    MTAlarmStorage *_storage;
}

@property (nonatomic, readonly) MTAlarmStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldScheduleSnapshotForAlarms:(id)arg1;

- (id)initWithStorage:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;

@end
