/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStatusItem.h>

@interface HFAbstractRangeStatusItem : HFStatusItem

+ (id)controllableServiceTypes;
+ (id)sensorServiceTypes;
+ (id)currentValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)maximumTargetValueCharacteristicType;
+ (id)currentModeCharacteristicTypes;
+ (id)targetModeCharacteristicTypes;
+ (id)displayTitleStringForService:(id)arg1 withResponse:(id)arg2 multipleServices:(_Bool)arg3 updateOptions:(id)arg4;
+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)customValueFormatter;
+ (_Bool)isPercentRange;
+ (id)_defaultValueFormatter;
+ (id)_localizedRangeStringForKey:(id)arg1;
+ (CDUnknownBlockType)displayValueComparator;
+ (id)localizationKeyPrefix;

- (id)_subclass_updateWithOptions:(id)arg1;

@end
