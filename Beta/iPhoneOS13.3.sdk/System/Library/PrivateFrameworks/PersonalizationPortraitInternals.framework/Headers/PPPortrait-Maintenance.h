/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortrait/PPPortrait.h>

@interface PPPortrait (Maintenance)

+ (void)registerMaintenanceTasksInternal;
+ (void)_registerCoreRoutineImport;
+ (void)_deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3;
+ (void)_deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3;
+ (void)_deleteAllNamedEntitiesExceedingMaxAgeSeconds:(double)arg1;
+ (void)_deleteAllLocationsExceedingMaxAgeSeconds:(double)arg1;
+ (void)_deleteAllTopicsExceedingMaxAgeSeconds:(double)arg1;
+ (id)_dateOfLastNamedEntityDKSyncViaCTS;
+ (_Bool)_checkDeferralAndAvoidDuetRateLimitWithBatchInterval:(double)arg1 lastSyncDate:(id)arg2 activity:(id)arg3;
+ (void)_setDateOfLastNamedEntityDKSyncViaCTSToDate:(id)arg1;
+ (id)_dateOfLastTopicDKSyncViaCTS;
+ (void)_setDateOfLastTopicDKSyncViaCTSToDate:(id)arg1;
+ (void)processPendingFeedbackWithShouldContinueBlock:(CDUnknownBlockType)arg1;
+ (void)_registerMapsImport;
+ (_Bool)_logPerplexityWithError:(id *)arg1;
+ (_Bool)_logUniqueTopicsWithError:(id *)arg1;
+ (_Bool)_runPortraitAnalyticsDataCollectionWithError:(id *)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_runPortraitMusicDataCollectionWithError:(id *)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_logDailyMetricsWithError:(id *)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
+ (void)_registerEventKitImport;
+ (void)_registerContactsImport;
+ (void)_registerTTLBasedDonationCleanup;
+ (_Bool)_logPerplexityForTopicsWithError:(id *)arg1;
+ (_Bool)_logPerplexityForNamedEntitiesWithError:(id *)arg1;
+ (id)_quantizeTopics:(id)arg1;
+ (id)_quantizeAndFilterEntities:(id)arg1 withLimit:(unsigned int)arg2;
+ (void)_registerEntityBackfilling;
+ (void)_registerKnowledgeStoreSync;
+ (id)_generateTopicExtractionsWithSamplingRate:(double)arg1 fromDate:(id)arg2 toDate:(id)arg3 error:(id *)arg4;
+ (void)_registerRemotelyDonatedRecordCleanup;
+ (void)_registerRTCSendLogs;
+ (void)_registerPeriodicMetrics;
+ (id)runPortraitMusicDataCollectionWithTopicStore:(id)arg1 namedEntityStore:(id)arg2 collectIntents:(_Bool)arg3 error:(id *)arg4 shouldContinueBlock:(CDUnknownBlockType)arg5;
+ (void)_registerDataCollection;
+ (void)_registerDailyMetricsLogging;
+ (void)_registerNowPlayingMPRequestResponseController;
+ (void)_registerAssetMetadataUpdate;
+ (void)_addMediaItem:(id)arg1 ofType:(int)arg2 withBundleId:(id)arg3 dateInterval:(id)arg4 to:(id)arg5;
+ (void)_registerProcessPendingFeedback;

@end
