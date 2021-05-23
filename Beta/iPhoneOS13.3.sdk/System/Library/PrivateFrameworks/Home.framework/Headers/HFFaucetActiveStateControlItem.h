/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFPowerStateControlItem.h>

@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem

{
    unsigned long long _valveControlMode;
}

@property (nonatomic, readonly) unsigned long long valveControlMode;

+ (id)na_identity;

- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 valveControlMode:(unsigned long long)arg2 displayResults:(id)arg3;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)resultsForBatchReadResponse:(id)arg1;

@end
