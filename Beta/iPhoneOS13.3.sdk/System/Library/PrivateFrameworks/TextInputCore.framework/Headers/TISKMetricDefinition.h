/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TISKMetricDefinition : NSObject

{
    _Bool _isPointMetric;
    int _metricType;
    NSString *_metricName;
    unsigned long long _positionalSize;
    CDStruct_2418a849 *_metricDefinition;
}

@property (nonatomic, readonly) NSString *metricName;
@property (nonatomic, readonly) int metricType;
@property (nonatomic, readonly) unsigned long long positionalSize;
@property (nonatomic, readonly) CDStruct_2418a849 *metricDefinition;
@property (nonatomic, readonly) _Bool isPointMetric;

+ (double)pointsToMM:(double)arg1;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_2418a849 *)arg3 size:(unsigned long long)arg4 isPointMetric:(_Bool)arg5;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_2418a849 *)arg3 size:(unsigned long long)arg4;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_2418a849 *)arg3;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(CDStruct_2418a849 *)arg3 isPointMetric:(_Bool)arg4;
+ (id)_makeMetric:(id)arg1 type:(int)arg2;
+ (id)metricDefinitions;

- (id)init:(id)arg1 type:(int)arg2 metricDef:(CDStruct_2418a849 *)arg3 size:(unsigned long long)arg4 isPointMetric:(_Bool)arg5;

@end
