/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSMutableDictionary;

@protocol HKHeartRateQueryHandler, OS_dispatch_queue;

@interface HKHeartRateQueryUtility : NSObject

{
    id <HKHeartRateQueryHandler> _queryHandler;
    NSDateInterval *_dateInterval;
    long long _timeScope;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableDictionary *_sampleResults;
    CDUnknownBlockType _resultsHandler;
}

@property (weak, nonatomic) id <HKHeartRateQueryHandler> queryHandler;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) long long timeScope;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (retain, nonatomic) NSMutableDictionary *sampleResults;
@property (copy, nonatomic) CDUnknownBlockType resultsHandler;

+ (void)enumerateDisplayTypeContextsWithBlock:(CDUnknownBlockType)arg1;
+ (id)_minMaxStatisticsFromChartPoints:(id)arg1 dateInterval:(id)arg2;
+ (id)_orderedDisplayTypeContextResults:(id)arg1;

- (id)initWithQueryHandler:(id)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)setupQueries;

@end
