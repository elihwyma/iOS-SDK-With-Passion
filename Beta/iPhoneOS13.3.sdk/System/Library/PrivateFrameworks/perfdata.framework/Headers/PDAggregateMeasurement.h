/*
 Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PDContainer, PDMeasurement;

__attribute__((visibility("hidden")))
@interface PDAggregateMeasurement : NSObject

{
    _Bool _validMin;
    _Bool _validMax;
    NSMutableDictionary *_labels;
    PDContainer *_container;
    NSString *_metric;
    NSString *_unitString;
    NSMutableDictionary *_variables;
    struct running_mean *_values_mean;
    struct pooled_mean *_stats_mean;
    double _min;
    double _max;
    unsigned long long _samples;
}

@property (retain, nonatomic) PDContainer *container;
@property (retain, nonatomic) NSString *metric;
@property (retain, nonatomic) NSString *unitString;
@property (retain, nonatomic) NSMutableDictionary *variables;
@property (retain, nonatomic) NSMutableDictionary *labels;
@property (nonatomic) struct running_mean *values_mean;
@property (nonatomic) struct pooled_mean *stats_mean;
@property (nonatomic) _Bool validMin;
@property (nonatomic) double min;
@property (nonatomic) _Bool validMax;
@property (nonatomic) double max;
@property (nonatomic) unsigned long long samples;
@property (nonatomic, readonly) PDMeasurement *measurement;

- (void)dealloc;
- (id)initWithContainer:(id)arg1 metric:(id)arg2 unitString:(id)arg3;
- (void)updateWithMeasurement:(id)arg1;

@end
