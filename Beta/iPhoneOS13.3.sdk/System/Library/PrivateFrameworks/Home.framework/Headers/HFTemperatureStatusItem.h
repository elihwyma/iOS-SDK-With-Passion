/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAbstractRangeStatusItem.h>

@interface HFTemperatureStatusItem : HFAbstractRangeStatusItem

+ (id)controllableServiceTypes;
+ (id)sensorServiceTypes;
+ (id)currentValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)maximumTargetValueCharacteristicType;
+ (id)currentModeCharacteristicTypes;
+ (id)targetModeCharacteristicTypes;
+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)customValueFormatter;
+ (_Bool)isPercentRange;
+ (CDUnknownBlockType)displayValueComparator;
+ (id)localizationKeyPrefix;

@end
