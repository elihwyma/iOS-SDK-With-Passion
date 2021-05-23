/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTAlarmIntentHandler.h>

@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)confirmUpdateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTUpdateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMTUpdateAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
