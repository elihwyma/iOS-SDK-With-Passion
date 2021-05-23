/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMSampleTag.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class NSSet;

@interface MXMSampleTagFilter : MXMSampleTag <Swift>

{
    _Bool _allowDescendents;
    NSSet *_tagPermutations;
}

@property (nonatomic, readonly) _Bool finite;
@property (nonatomic, readonly, getter=finite) _Bool isFinite;
@property (copy, nonatomic) NSSet *tagPermutations;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 allowDescendents:(_Bool)arg2;
- (_Bool)matchesSampleWithTag:(id)arg1;

@end
