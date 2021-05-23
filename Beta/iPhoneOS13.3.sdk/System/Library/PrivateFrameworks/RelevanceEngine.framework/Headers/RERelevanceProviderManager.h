/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSString, REFeatureSet, REPriorityQueue, RERelevanceProviderEnvironment, REUpNextTimer;

@protocol OS_dispatch_queue;

@interface RERelevanceProviderManager : NSObject

{
    RERelevanceProviderEnvironment *_environment;
    NSHashTable *_providers;
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    NSArray *_effectiveFeatures;
    NSDictionary *_inflectionValues;
    _Bool _dataStoresOpened;
    _Bool _hasSeperateRelevanceQueue;
    _Bool _implementsPrepareForUpdate;
    NSObject<OS_dispatch_queue> *_relevanceQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_loggingHeader;
    REFeatureSet *_supportedFeatures;
}

@property (weak, nonatomic) RERelevanceProviderEnvironment *environment;
@property (retain, nonatomic) REFeatureSet *supportedFeatures;
@property (nonatomic, readonly) NSArray *effectiveFeatures;
@property (nonatomic, readonly) NSArray *allProviders;
@property (nonatomic, readonly) NSArray *allRelevanceProviders;
@property (nonatomic, readonly) unsigned long long scheduledUpdatesCount;
@property (nonatomic, readonly) _Bool dataSourcesOpened;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (_Bool)_supportsHistoricProviders;
+ (void)setProviderManagerClassesLoadingBlock:(CDUnknownBlockType)arg1;
+ (id)providerManagerClasses;
+ (id)_dependencyClasses;
+ (_Bool)_wantsDelayedUpdate;
+ (_Bool)_requiresLocationServices;
+ (_Bool)supportsHistoricProviders;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)pause;
- (void)resume;
- (id)initWithQueue:(id)arg1;
- (void)endActivity:(id)arg1;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleSignificantTimeChange;
- (float)_relevanceForProvider:(id)arg1;
- (void)_loadLoggingHeader;
- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isValidProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (void)_scheduleUpdate:(id)arg1;
- (void)_accessQueue_scheduleUpdate:(id)arg1;
- (void)_removeProvider:(id)arg1;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;
- (_Bool)_isHistoricProvider:(id)arg1;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (void)beginActivity:(id)arg1;
- (void)_relevanceQueue_openDataStores;
- (void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;
- (void)_accessQueue_resetTimer;
- (void)_accessQueue_performUpdate:(id)arg1;
- (void)_accessQueue_performImmediateUpdate:(id)arg1;
- (void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)arg1;
- (void)addProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)containsProvider:(id)arg1;
- (void)relevanceForProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)relevanceForProvider:(id)arg1 context:(id)arg2;
- (void)isProviderHistoric:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)relevanceForHistoricProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateInflectionFeatureValues:(CDUnknownBlockType)arg1;
- (_Bool)_dataSourcesOpened;
- (id)_manager_queue;
- (void)_enumerateProviders:(CDUnknownBlockType)arg1;
- (void)beginFetchingData;
- (void)finishFetchingData;
- (void)_removeAllPendingUpdates;
- (void)_prepareForUpdateWithCompletion:(CDUnknownBlockType)arg1;

@end
