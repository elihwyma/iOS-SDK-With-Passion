/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMCharacteristicMetadata.h>

#import <Home/Swift-Protocol.h>

@class HFNumberValueConstraints, NSString;

@interface HMCharacteristicMetadata (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFNumberValueConstraints *hf_numericValueConstraints;
@property (nonatomic, readonly) _Bool hf_isNumeric;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_characteristicValueForPercentage:(double)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (_Bool)hf_isValidValue:(id)arg1;
- (_Bool)hf_isInteger;
- (_Bool)hf_isEqualToMetadata:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;

@end
