/*
 Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, PDContainer;

@interface PDMeasurement : NSObject

{
    _Bool _largerBetter;
    _Bool _summary;
    _Bool _context;
    NSString *_metric;
    NSString *_unitString;
    NSDictionary *_variables;
    NSDictionary *_labels;
    unsigned long long _group;
    NSNumber *_value;
    NSNumber *_sampleCount;
    NSNumber *_mean;
    NSNumber *_standardDeviation;
    NSNumber *_minimum;
    NSNumber *_maximum;
    NSDictionary *_measurement;
    PDContainer *_container;
    NSString *_cachedMetricFilter;
}

@property (retain, nonatomic) NSDictionary *measurement;
@property (retain, nonatomic) NSString *metric;
@property (retain, nonatomic) NSString *unitString;
@property (weak, nonatomic) PDContainer *container;
@property (retain, nonatomic) NSDictionary *variables;
@property (retain, nonatomic) NSDictionary *labels;
@property (nonatomic) _Bool largerBetter;
@property (nonatomic) unsigned long long group;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumber *sampleCount;
@property (retain, nonatomic) NSNumber *mean;
@property (retain, nonatomic) NSNumber *standardDeviation;
@property (retain, nonatomic) NSNumber *minimum;
@property (retain, nonatomic) NSNumber *maximum;
@property (nonatomic, getter=isSummary) _Bool summary;
@property (nonatomic, getter=isContext) _Bool context;
@property (retain, nonatomic) NSString *cachedMetricFilter;
@property (nonatomic, readonly) unsigned long long histogramBucketCount;
@property (nonatomic, readonly) unsigned long long percentileCount;

- (id)description;
- (_Bool)isComparableTo:(id)arg1;
- (id)metricFilterIgnoringVariables:(id)arg1;
- (_Bool)isComparableTo:(id)arg1 ignoringVariables:(id)arg2;
- (id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)matchesVariables:(id)arg1 ignoringMissing:(_Bool)arg2;
- (id)metricFilter;
- (_Bool)isLike:(id)arg1;
- (id)metricFilterIgnoringNullableVariables:(id)arg1;
- (_Bool)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2;
- (_Bool)matchesMetricFilter:(id)arg1;
- (_Bool)enumerateHistogramBucketsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumeratePercentilesWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
