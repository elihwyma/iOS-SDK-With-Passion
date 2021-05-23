/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <MobileTimer/MTAlarm.h>

@interface MTAlarm (HFAlarmUtilities)

+ (id)hf_buildAlarmFromCollectionSettingItem:(id)arg1;
+ (_Bool)hf_verifyThatAlarmsAreConsistent:(id)arg1;
+ (id)hf_buildAlarmsFromCollectionSettingItems:(id)arg1;
+ (_Bool)hf_areAlarms:(id)arg1 equalToAlarms:(id)arg2 includeModificationDate:(_Bool)arg3;
+ (id)hf_alarmsMatchingAlarmId:(id)arg1 withinItemArray:(id)arg2;

@end
