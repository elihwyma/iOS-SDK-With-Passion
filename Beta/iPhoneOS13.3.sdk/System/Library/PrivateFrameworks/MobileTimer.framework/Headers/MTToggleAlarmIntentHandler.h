/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTAlarmIntentHandler.h>

@class NSString;

@interface MTToggleAlarmIntentHandler : MTAlarmIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_alarmUserActivityWithEnableIntent:(id)arg1;
- (id)_alarmUserActivityWithDisableIntent:(id)arg1;
- (void)_toggleAlarm:(id)arg1 alarmIDString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)getEnableStateForAlarm:(id)arg1;
- (id)updateEnableStateForAlarm:(id)arg1 enabled:(_Bool)arg2;
- (void)confirmEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleToggleAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveOperationForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveStateForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveAlarmForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideAlarmOptionsForToggleAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)confirmToggleAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMTEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMTDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
