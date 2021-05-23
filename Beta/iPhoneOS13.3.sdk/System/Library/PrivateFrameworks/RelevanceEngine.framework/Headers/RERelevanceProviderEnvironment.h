/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class NSDictionary, NSHashTable, NSLock, NSMapTable, NSMutableArray, NSMutableSet, REDependencyGraph, REFeatureSet, REUpNextDisjointSet, REUpNextScheduler;

@protocol RERelevanceProviderEnvironmentDelegate;

@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem

{
    NSMutableArray *_relevanceManagers;
    NSMapTable *_relevanceClassManagerMap;
    NSMapTable *_relevanceHistogramMap;
    REUpNextDisjointSet *_relevanceProviderSet;
    REDependencyGraph *_dependencyGraph;
    NSMapTable *_relevanceValues;
    NSHashTable *_customProviders;
    NSLock *_relevanceValuesLock;
    REFeatureSet *_supportedFeatures;
    REUpNextScheduler *_scheduler;
    NSHashTable *_providersToUpdate;
    NSMutableSet *_providerManagersToUpdate;
    NSMutableArray *_updateCompletionBlocks;
    _Bool _allowsLocationUse;
    id <RERelevanceProviderEnvironmentDelegate> _delegate;
}

@property (weak, nonatomic) id <RERelevanceProviderEnvironmentDelegate> delegate;
@property (nonatomic) _Bool allowsLocationUse;
@property (nonatomic, readonly) unsigned long long relevanceProviderCount;
@property (nonatomic, readonly) REFeatureSet *supportedFeatures;
@property (nonatomic, readonly) NSDictionary *allProviderValues;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleUpdateForRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isSupportedRelevanceProvider:(id)arg1;
- (id)currentRelevanceProvidersState;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)_histogramForFeature:(id)arg1;
- (void)_queue_performUpdate:(CDUnknownBlockType)arg1;
- (id)_providerManagerForProvider:(id)arg1;
- (void)_removeRelevanceValueForProvider:(id)arg1;
- (void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2;
- (id)_histogramForProvider:(id)arg1;
- (_Bool)containsRelevanceProvider:(id)arg1;
- (id)relevancesForRelevanceProvider:(id)arg1;
- (void)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2;
- (id)featuresForRelevanceProvider:(id)arg1;
- (id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)encodeRelevaneProvider:(id)arg1;
- (void)addRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isRelevanceProviderLoaded:(id)arg1;
- (void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2;
- (_Bool)isRelevanceProviderHistoric:(id)arg1;
- (id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2;
- (void)accessHistogramForFeature:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
