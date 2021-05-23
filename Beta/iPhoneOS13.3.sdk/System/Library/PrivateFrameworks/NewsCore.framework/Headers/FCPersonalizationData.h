/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/Swift-Protocol.h>

@class CKRecord, FCPersonalizationTreatment, NSData, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCPersonalizationData : FCPrivateDataController <Swift>

{
    _Bool _attemptingUpload;
    NSData *_pbData;
    NSMutableDictionary *_aggregates;
    NSMutableDictionary *_openChangeGroupDeltas;
    NSMutableArray *_closedChangeGroups;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id <FCOperationThrottler> _saveThrottler;
}

@property (retain, nonatomic) NSMutableDictionary *aggregates;
@property (retain, nonatomic) NSMutableDictionary *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain) FCPersonalizationTreatment *treatment;
@property (retain, nonatomic) id <FCOperationThrottler> saveThrottler;
@property _Bool attemptingUpload;
@property (nonatomic, readonly) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, readonly) NSData *pbData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)desiredKeys;
+ (_Bool)requiresPushNotificationSupport;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)localStoreMigrator;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_applicationDidEnterBackground;
- (id)_instanceIdentifier;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (void)activityObservingApplicationDidEnterBackground;
- (id)aggregatesForFeatures:(id)arg1;
- (void)_reloadTreatment;
- (void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (void)_closeOpenChangeGroupFromInstance:(id)arg1;
- (void)clearPersonalizationData;
- (void)_writeToLocalStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)initWithPBData:(id)arg1 treatment:(id)arg2;
- (id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6;
- (id)d_allGlobalAggregates;
- (void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateAggregatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(_Bool)arg5 configurableValues:(id)arg6 featuresUpdatedBlock:(CDUnknownBlockType)arg7;
- (void)prepareAggregatesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)d_allResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
