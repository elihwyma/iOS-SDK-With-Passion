/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter

{
    NSArray *_subfilters;
    unsigned long long _compoundType;
}

@property (copy, nonatomic, readonly) NSArray *subfilters;
@property (nonatomic, readonly) unsigned long long compoundType;

+ (_Bool)supportsSecureCoding;
+ (id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (_Bool)acceptsActivitySummary:(id)arg1;
- (_Bool)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (id)_subfilters;
- (id)_copyWithZone:(struct _NSZone *)arg1 subfilters:(id)arg2;
- (_Bool)_compoundFilterAcceptsObjectWithEvaluation:(CDUnknownBlockType)arg1;

@end
