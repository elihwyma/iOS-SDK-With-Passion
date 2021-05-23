/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKUnit.h>

@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit

{
    NSString *_unitString;
    NSString *_prefix;
    NSString *_root;
    _Bool _uniqued;
    double _proportionalSize;
}

@property (nonatomic, readonly) double proportionalSize;
@property (nonatomic, readonly) _HKBaseDimension *dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)unitFromString:(id)arg1;
+ (id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2;
+ (id)_uniquedRootUnit:(id)arg1;
+ (id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3;
+ (id)_uniquedRootUnitFromDefinition:(CDStruct_bafa805a)arg1;
+ (id)_rootUnitWithDefinition:(CDStruct_bafa805a)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)unitString;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;
- (id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2;
- (id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3;

@end
