/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKSampleCountQuery, NSMutableDictionary, NSString, WDProfile;

@protocol OS_dispatch_queue, WDElectrocardiogramFilterDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramFilterDataProvider : NSObject

{
    WDProfile *_profile;
    id <WDElectrocardiogramFilterDataProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableDictionary *_counts;
    HKSampleCountQuery *_electrocardiogramCountQuery;
    HKSampleCountQuery *_sinusRhythmCountQuery;
    HKSampleCountQuery *_atrialFibrillationCountQuery;
    HKSampleCountQuery *_highLowHeartRateCountQuery;
    HKSampleCountQuery *_inconclusiveCountQuery;
}

@property (weak, nonatomic) WDProfile *profile;
@property (weak, nonatomic) id <WDElectrocardiogramFilterDataProviderDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (retain, nonatomic) NSMutableDictionary *counts;
@property (retain, nonatomic) HKSampleCountQuery *electrocardiogramCountQuery;
@property (retain, nonatomic) HKSampleCountQuery *sinusRhythmCountQuery;
@property (retain, nonatomic) HKSampleCountQuery *atrialFibrillationCountQuery;
@property (retain, nonatomic) HKSampleCountQuery *highLowHeartRateCountQuery;
@property (retain, nonatomic) HKSampleCountQuery *inconclusiveCountQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_atrialFibrillationClassificationPredicateWithValue:(unsigned long long)arg1;
+ (id)_atrialFibrillationClassifications;
+ (id)_atrialFibrillationClassificationPredicateWithClassifications:(id)arg1;
+ (id)_highLowHeartRateClassifications;
+ (id)_inconclusiveClassifications;
+ (id)_atrialFibrillationClassificationPredicateWithValues:(id)arg1;
+ (id)electrocardiogramPredicateForType:(long long)arg1;
+ (id)cellTitleForType:(long long)arg1;
+ (id)viewControllerTitleForType:(long long)arg1;

- (void)stop;
- (void)start;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)_stopQueries;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (id)_countQueryForType:(long long)arg1;
- (long long)_rQueue_countForType:(long long)arg1;
- (long long)countForType:(long long)arg1;
- (void)_rQueue_setCount:(long long)arg1 forType:(long long)arg2;
- (void)_rQueue_notifyDelegateDidUpdateCountForType:(long long)arg1;
- (void)_safelyStopQuery:(id)arg1;
- (id)displayStringCountForType:(long long)arg1;
- (id)_filterSamples:(id)arg1 matchingAtrialFibrillationClassification:(unsigned long long)arg2;
- (id)_filterSamples:(id)arg1 matchingAtrialFibrillationClassifications:(id)arg2;

@end
