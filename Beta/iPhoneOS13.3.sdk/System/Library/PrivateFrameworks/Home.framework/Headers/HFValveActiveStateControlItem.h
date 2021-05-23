/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem

- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)writeValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(_Bool)arg2 active:(_Bool)arg3 hasFaucetAsParentService:(_Bool)arg4;
- (id)_faucetValveSubtypeToIconIdentifierMap;

@end
