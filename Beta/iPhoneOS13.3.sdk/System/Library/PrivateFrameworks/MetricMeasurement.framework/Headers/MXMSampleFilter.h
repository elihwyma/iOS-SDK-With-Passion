/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class NSMutableDictionary, NSSet;

@interface MXMSampleFilter : NSObject <Swift>

{
    NSSet *_tagFilters;
    NSMutableDictionary *_attributetFilters;
}

@property (retain, nonatomic) NSSet *tagFilters;
@property (retain, nonatomic) NSMutableDictionary *attributetFilters;
@property (nonatomic, readonly) _Bool finite;
@property (nonatomic, readonly, getter=finite) _Bool isFinite;

+ (_Bool)supportsSecureCoding;
+ (id)filterWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;
+ (id)filterWithTagFilter:(id)arg1;
+ (id)filterWithTagFilters:(id)arg1;
+ (id)filterWithAttributeFilter:(id)arg1;
+ (id)filterWithAttributeFilters:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeFilterWithName:(id)arg1;
- (_Bool)matchesSamplesWithTag:(id)arg1;
- (id)initWithAttributeFilters:(id)arg1 tagFilters:(id)arg2;
- (id)initWithTagFilter:(id)arg1;
- (id)initWithTagFilters:(id)arg1;
- (id)initWithAttributeFilter:(id)arg1;
- (id)initWithAttributeFilters:(id)arg1;
- (id)initWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;
- (_Bool)matchesSamplesWithAttributes:(id)arg1;
- (_Bool)matchesSamplesWithAttribute:(id)arg1;
- (_Bool)matchesSample:(id)arg1;
- (_Bool)matchesSampleSet:(id)arg1;

@end
