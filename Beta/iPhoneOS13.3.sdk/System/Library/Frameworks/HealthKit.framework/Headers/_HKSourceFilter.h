/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSSet;

@interface _HKSourceFilter : _HKFilter

{
    _Bool _includesLocalDevice;
    NSSet *_sources;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) NSSet *sources;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4;
+ (id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (id)filterWithSources:(id)arg1 operatorType:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
