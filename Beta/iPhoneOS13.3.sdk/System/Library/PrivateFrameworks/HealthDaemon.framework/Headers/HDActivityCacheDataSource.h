/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDActivityCacheHeartRateStatisticsBuilder, HDActivityCacheStatisticsBuilder, HDProfile, HKCategoryType, HKWorkoutType, NSDateInterval, NSSet, NSString, _HKDelayedOperation;

@protocol OS_dispatch_queue;

@interface HDActivityCacheDataSource : NSObject

{
    vector_7eaa0458 _previousWatchActivationLogEntryVector;
    _Bool _previousWatchActivationLogEntryIsSet;
    long long _quantitySampleAnchor;
    long long _nonQuantitySampleAnchor;
    NSString *_nonQuantitySamplesQueryString;
    NSString *_quantitySamplesQueryString;
    HKCategoryType *_standHoursType;
    HKCategoryType *_deepBreathingSessionType;
    HKWorkoutType *_workoutType;
    HKCategoryType *_watchActivationType;
    NSSet *_allObservedTypes;
    NSSet *_observedQuantityTypes;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_rebuildOperation;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool>>> _isWatchSourceCache;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool>>> _isConnectedGymSourceCache;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool>>> _isConnectedGymDeviceCache;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    HDActivityCacheStatisticsBuilder *_targetDayStatisticsBuilder;
    HDActivityCacheStatisticsBuilder *_previousDayStatisticsBuilder;
    HDActivityCacheHeartRateStatisticsBuilder *_targetDayHeartRateStatisticsBuilder;
    HDActivityCacheHeartRateStatisticsBuilder *_previousDayHeartRateStatisticsBuilder;
    NSDateInterval *_targetDayDateInterval;
    NSDateInterval *_previousDayDateInterval;
    long long _targetDayCacheIndex;
    long long _previousDayCacheIndex;
    NSString *_targetDayStatisticsBuilderTag;
    NSString *_previousDayStatisticsBuilderTag;
}

@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) NSSet *observedQuantityTypes;
@property (retain, nonatomic) NSDateInterval *targetDayDateInterval;
@property (retain, nonatomic) NSDateInterval *previousDayDateInterval;
@property (nonatomic) long long targetDayCacheIndex;
@property (nonatomic) long long previousDayCacheIndex;
@property (retain, nonatomic) NSString *targetDayStatisticsBuilderTag;
@property (retain, nonatomic) NSString *previousDayStatisticsBuilderTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void)resumeUpdates;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)pauseUpdates;
- (id)initWithProfile:(id)arg1 observedQuantityTypes:(id)arg2 updateOperation:(id)arg3 rebuildOperation:(id)arg4 queue:(id)arg5;
- (_Bool)updateWithError:(id *)arg1;
- (void)_samplesAddedToWorkoutNotification:(id)arg1;
- (void)_registerForSamplesAdded;
- (void)_deregisterForSamplesAdded;
- (_Bool)_primePreviousActivationLogEntryWithError:(id *)arg1;
- (_Bool)_updateStatisticsBuildersWithError:(id *)arg1;
- (_Bool)_dateIntervalsAreSet;
- (_Bool)_readyToPrimeStatisticsBuilders;
- (void)_resetStatisticsBuilders;
- (_Bool)_primeNonQuantitySamplesWithError:(id *)arg1 count:(long long *)arg2;
- (_Bool)_primeQuantitySamplesWithError:(id *)arg1 count:(long long *)arg2;
- (_Bool)_readyToPrimeActivationLogEntries;
- (id)_overallDateInterval;
- (void)_resetPreviousWatchActivationLogEntries;
- (_Bool)_quantityTypeRequiresWatchSource:(long long)arg1;
- (id)_parameterStringWithCount:(long long)arg1;
- (id)_nonQuantitySamplesQueryStringWithSampleTypes:(id)arg1;
- (long long)_isWatchSourceForSourceIdentifier:(long long)arg1 error:(id *)arg2;
- (_Bool)_nonQuantitySampleRequiresWatchSource:(long long)arg1;
- (long long)_isConnectedGymDeviceForDeviceIdentifier:(long long)arg1 error:(id *)arg2;
- (id)_quantitySamplesQueryStringWithQuantityTypes:(id)arg1;
- (long long)_isConnectedGymSourceForSourceIdentifier:(long long)arg1 error:(id *)arg2;
- (_Bool)_quantitySampleIsValidWithTypeCode:(long long)arg1 workoutSourceIdentifier:(long long)arg2 isWatchSource:(_Bool)arg3;
- (_Bool)_typeIsValidFromCompanionWithoutWorkout:(long long)arg1;
- (id)activityCacheStatisticsBuilder:(id)arg1 sourceOrderForObjectType:(id)arg2;
- (void)_resetEverything;

@end
