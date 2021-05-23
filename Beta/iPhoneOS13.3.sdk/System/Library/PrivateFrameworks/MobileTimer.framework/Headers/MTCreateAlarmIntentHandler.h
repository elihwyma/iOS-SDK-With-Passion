/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTAlarmIntentHandler.h>

@class NSString;

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)handleMTCreateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveLabelForMTCreateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDateComponentsForMTCreateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveRepeatScheduleForMTCreateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)confirmMTCreateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultRepeatScheduleForMTCreateAlarm:(id)arg1;

@end
