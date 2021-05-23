/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmManager, NSString;

@interface MTAlarmManagerExportedObject : NSObject

{
    MTAlarmManager *_alarmManager;
}

@property (weak, nonatomic, readonly) MTAlarmManager *alarmManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmFired:(id)arg1;
- (id)initWithAlarmManager:(id)arg1;
- (void)_didReceiveAlarmServerReadyNotification:(id)arg1;
- (void)alarmSnoozed:(id)arg1;
- (void)alarmDismissed:(id)arg1;
- (void)nextAlarmChanged:(id)arg1;

@end
