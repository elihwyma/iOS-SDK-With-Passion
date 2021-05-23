/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSMetricsDatabaseDataSource, NSString;

@protocol AMSBagProtocol, AMSMetricsBagContract, AMSMetricsFlushStrategy, OS_dispatch_queue;

@interface AMSMetrics : NSObject <Swift>

{
    _Bool _flushTimerEnabled;
    _Bool _flushingDisabled;
    _Bool _monitorsLifecycleEvents;
    _Bool _flushOnForeground;
    id <AMSBagProtocol> _bag;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id <AMSMetricsFlushStrategy> _currentFlushStrategy;
    AMSMetricsDatabaseDataSource *_databaseSource;
    CDUnknownBlockType _flushIntervalBlock;
    long long _destination;
    NSObject<OS_dispatch_queue> *_flushQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) id <AMSMetricsFlushStrategy> currentFlushStrategy;
@property (retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource;
@property (nonatomic) _Bool flushingDisabled;
@property (nonatomic) _Bool flushOnForeground;
@property (copy, nonatomic) CDUnknownBlockType flushIntervalBlock;
@property (nonatomic) long long destination;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue;
@property (retain, nonatomic) id <AMSMetricsBagContract> bagContract;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, readonly) long long eventCount;
@property (nonatomic) _Bool flushTimerEnabled;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) _Bool monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (id)_sharedInstanceUsingBag:(id)arg1;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)serverTimeFromDate:(id)arg1;
+ (id)sharedTimerQueue;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (_Bool)flushTimerEnabled;
+ (_Bool)disableBackgroundMetrics;
+ (_Bool)flushDelayEnabled;
+ (void)setDisableBackgroundMetrics:(_Bool)arg1;
+ (void)setFlushDelayEnabled:(_Bool)arg1;
+ (void)setFlushTimerEnabled:(_Bool)arg1;
+ (double)timeIntervalFromServerTime:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (id)flush;
- (id)flushEvents:(id)arg1;
- (void)_applicationWillEnterForeground;
- (void)enqueueEvent:(id)arg1;
- (void)_beginFlushIntervalWithStyle:(long long)arg1;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;
- (_Bool)_flushIntervalEnabledForStyle:(long long)arg1;
- (void)enqueueEvents:(id)arg1;
- (id)enqueueAsyncEvents:(id)arg1;
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;
- (void)_flushIntervalInvalidate;
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;
- (double)_flushInterval;
- (void)_handleFlushIntervalWithStyle:(long long)arg1;
- (void)dropEvents;
- (id)flushTopic:(id)arg1;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;

@end
