/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REObservableSingleton.h>

@class NSCountedSet, NSObject, REObserverStore, REUpNextScheduler;

@protocol OS_dispatch_queue;

@interface REPredictor : REObservableSingleton

{
    NSObject<OS_dispatch_queue> *_queue;
    REObserverStore *_engines;
    REUpNextScheduler *_refreshScheduler;
    NSCountedSet *_activities;
    struct os_unfair_lock_s _predictorLock;
    _Bool __isRunning;
    long long _beginUpdatesCount;
}

@property (nonatomic, readonly) NSCountedSet *outstandingActivities;
@property (setter=_setIsRunning:) _Bool _isRunning;
@property (nonatomic) long long beginUpdatesCount;
@property (nonatomic, readonly) _Bool running;

+ (double)updateInterval;
+ (id)supportedFeatures;
+ (id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2;
+ (id)availablePredictors;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)queue;
- (id)_init;
- (void)pause;
- (void)resume;
- (_Bool)isRunning;
- (id)engines;
- (void)update;
- (void)_setRunning:(_Bool)arg1;
- (void)beginUpdates;
- (void)endUpdates;
- (void)_performUpdate;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)beginActivity:(id)arg1;
- (void)enumerateInflectionFeatureValues:(CDUnknownBlockType)arg1;
- (void)beginFetchingData;
- (void)finishFetchingData;
- (void)updateObservers;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)finishActivity:(id)arg1;
- (void)addRelevanceEngine:(id)arg1;
- (void)removeRelevanceEngine:(id)arg1;
- (void)onQueueSync:(CDUnknownBlockType)arg1;

@end
