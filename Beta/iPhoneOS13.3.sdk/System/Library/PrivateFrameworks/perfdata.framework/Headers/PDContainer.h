/*
 Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface PDContainer : NSObject

{
    _Bool _largerBetter;
    NSString *_name;
    unsigned long long _version;
    NSDictionary *_configuration;
    NSMutableDictionary *_extensions;
    NSString *_testDescription;
    NSString *_notes;
    NSString *_primaryMetricFilter;
    NSString *_generator;
    NSDictionary *_variables;
    NSDictionary *_labels;
    NSMutableDictionary *_perfdata;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSMutableDictionary *extensions;
@property (retain, nonatomic) NSString *testDescription;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *generator;
@property (nonatomic) _Bool largerBetter;
@property (retain, nonatomic) NSDictionary *variables;
@property (retain, nonatomic) NSDictionary *labels;
@property (retain, nonatomic) NSMutableDictionary *perfdata;
@property (retain, nonatomic, readonly) NSString *primaryMetricFilter;
@property (nonatomic, readonly) unsigned long long measurementCount;

+ (id)containerWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)containerWithPath:(id)arg1 error:(id *)arg2;
+ (id)containerWithFileURL:(id)arg1 error:(id *)arg2;
+ (id)containerWithJSONData:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)isComparableTo:(id)arg1;
- (_Bool)enumerateMeasurementsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)isLike:(id)arg1;
- (_Bool)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2;

@end
