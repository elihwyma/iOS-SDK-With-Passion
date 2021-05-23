/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SFAnalyticsSQLiteStore;

@protocol OS_dispatch_queue;

@interface SFAnalytics : NSObject

{
    SFAnalyticsSQLiteStore *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_multisamplers;
    unsigned int _disableLogging:1;
}

@property (retain, nonatomic) SFAnalyticsSQLiteStore *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)datePropertyForKey:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4;
- (id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (id)startLogSystemMetricsForActivityNamed:(id)arg1;
- (void)removeState;
- (void)incrementIntegerPropertyForKey:(id)arg1;
- (void)setNumberProperty:(id)arg1 forKey:(id)arg2;
- (id)numberPropertyForKey:(id)arg1;
- (id)coreAnalyticsKeyFilter:(id)arg1;
- (void)dailyCoreAnalyticsMetrics:(id)arg1;
- (void)logSuccessForEventNamed:(id)arg1 timestampBucket:(unsigned int)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned int)arg3;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned int)arg3;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 timestampBucket:(unsigned int)arg4;
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4 timestampBucket:(unsigned int)arg5;
- (void)noteEventNamed:(id)arg1 timestampBucket:(unsigned int)arg2;
- (void)noteEventNamed:(id)arg1;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3 timestampBucket:(unsigned int)arg4;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3;
- (id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3 timestampBucket:(double)arg4;
- (id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)existingMetricSamplerForName:(id)arg1;
- (id)existingMultiSamplerForName:(id)arg1;
- (void)removeMetricSamplerForName:(id)arg1;
- (void)removeMultiSamplerForName:(id)arg1;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(_Bool)arg3;

@end
