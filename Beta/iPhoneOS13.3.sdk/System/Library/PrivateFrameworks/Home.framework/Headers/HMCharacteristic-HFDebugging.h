/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMCharacteristic.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HMCharacteristic (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_descriptionForProperties:(id)arg1;
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;
+ (id)hf_powerStateCharacteristicTypes;
+ (CDUnknownBlockType)hf_characteristicSortComparator;
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;
+ (id)hf_alarmCharacteristicTypes;
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;
+ (id)hf_valueRangeCharacteristicTypes;
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;
+ (id)hf_descriptionForCharacteristicType:(id)arg1;
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;
+ (_Bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;
+ (id)hf_suggestionVendorForCharacteristicType:(id)arg1;

- (id)hf_minimumTriggerValue;
- (id)hf_maximumTriggerValue;
- (id)hf_thresholdValueForRange:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_home;
- (id)hf_programmableSwitchValidValueSet;
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;
- (id)hf_characteristicTypeDescription;
- (_Bool)hf_isReadable;
- (_Bool)hf_isWritable;
- (id)hf_defaultValue;
- (id)hf_eventTriggersForTriggerValue:(id)arg1;
- (id)hf_eventTriggers;
- (id)hf_triggerValues;
- (id)hf_valueAfterTriggerValue:(id)arg1;
- (id)hf_valueBeforeTriggerValue:(id)arg1;
- (id)hf_associatedCharacteristicType;
- (long long)hf_sortPriority;
- (_Bool)hf_shouldCaptureInActionSets;
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;

@end
