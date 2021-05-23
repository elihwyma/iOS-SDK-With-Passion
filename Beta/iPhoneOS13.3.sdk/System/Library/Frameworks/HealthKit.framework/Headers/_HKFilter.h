/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@interface _HKFilter : NSObject <Swift>

+ (_Bool)supportsSecureCoding;
+ (id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2;
+ (id)filterByCombiningFilters:(id)arg1 compoundType:(unsigned long long)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (_Bool)filter:(id)arg1 acceptsDataObject:(id)arg2;
+ (id)trueFilter;
+ (id)falseFilter;
+ (_Bool)filter:(id)arg1 acceptsActivitySummary:(id)arg2;
+ (_Bool)filter:(id)arg1 acceptsDataObjectWithStartTimestamp:(double)arg2 endTimestamp:(double)arg3 valueInCanonicalUnit:(double)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (_Bool)acceptsActivitySummary:(id)arg1;
- (_Bool)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (id)_subfilters;
- (id)filterByApplyingTransformation:(CDUnknownBlockType)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 subfilters:(id)arg2;

@end
