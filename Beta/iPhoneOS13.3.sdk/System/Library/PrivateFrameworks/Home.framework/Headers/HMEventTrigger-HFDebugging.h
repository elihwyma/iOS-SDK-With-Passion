/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMEventTrigger.h>

@class NSString;

@interface HMEventTrigger (HFDebugging)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 type:(unsigned long long)arg3;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 type:(unsigned long long)arg3 forUser:(id)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4 forUser:(id)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 presenceEvent:(id)arg2 type:(unsigned long long)arg3;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 region:(id)arg2 type:(unsigned long long)arg3 forUser:(id)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 alarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 nonAlarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageDescriptionForCharacteristic:(id)arg1;
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;

- (id)hf_unmarkTriggerAsHomeAppCreated;
- (id)hf_markTriggerAsHomeAppCreated;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (unsigned long long)hf_triggerType;
- (_Bool)hf_requiresConfirmationToRun;
- (id)hf_designateTrigger:(_Bool)arg1;
- (_Bool)hf_isHomeAppCreatedTrigger;

@end
