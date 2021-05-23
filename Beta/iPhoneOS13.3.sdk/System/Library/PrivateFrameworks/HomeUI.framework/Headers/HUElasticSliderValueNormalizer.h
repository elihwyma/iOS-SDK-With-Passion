/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFNumberValueConstraints, HUElasticSliderValueNormalizationOptions;

@interface HUElasticSliderValueNormalizer : NSObject

{
    _Bool _hasSecondaryValue;
    HFNumberValueConstraints *_minValueConstraints;
    HFNumberValueConstraints *_maxValueConstraints;
    HUElasticSliderValueNormalizationOptions *_options;
    CDStruct_ef18196a _currentValueRange;
}

@property (retain, nonatomic) HFNumberValueConstraints *minValueConstraints;
@property (retain, nonatomic) HFNumberValueConstraints *maxValueConstraints;
@property (nonatomic) CDStruct_c3b9c2ee currentValueRange;
@property (nonatomic) _Bool hasSecondaryValue;
@property (retain, nonatomic) HUElasticSliderValueNormalizationOptions *options;

- (CDStruct_c3b9c2ee)normalizeRange:(CDStruct_c3b9c2ee)arg1;
- (double)normalizeValue:(double)arg1 ofType:(unsigned long long)arg2;
- (id)initWithCurrentValueRange:(CDStruct_c3b9c2ee)arg1 hasSecondaryValue:(_Bool)arg2;
- (double)_rubberBandValue:(double)arg1 ofType:(unsigned long long)arg2;
- (id)_effectiveConstraintsForValueOfType:(unsigned long long)arg1 boundRange:(_Bool)arg2;
- (id)_originalConstraintsForValueType:(unsigned long long)arg1;

@end
