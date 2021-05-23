/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmStorage, NSMutableDictionary, NSString;

@protocol NAScheduler;

@interface MTAlarmIntentDonor : NSObject

{
    MTAlarmStorage *_storage;
    NSMutableDictionary *_alarmsByID;
    id <NAScheduler> _serializer;
}

@property (nonatomic, readonly) MTAlarmStorage *storage;
@property (nonatomic, readonly) NSMutableDictionary *alarmsByID;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStorage:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)prepareAlarms;

@end
