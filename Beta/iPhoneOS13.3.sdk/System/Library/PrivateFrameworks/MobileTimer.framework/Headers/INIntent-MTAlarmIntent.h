/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INIntent.h>

@interface INIntent (MTAlarmIntent)

+ (id)mt_nanoAlarmBundleIDForAlarm:(id)arg1;
+ (id)mt_intentForAlarmCreate:(id)arg1;
+ (id)mt_intentForAlarmUpdate:(id)arg1;
+ (id)mt_intentForAlarmEnable:(id)arg1;
+ (id)mt_intentForAlarmDisable:(id)arg1;
+ (void)mt_deleteDonationsForAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;

@end
