/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQuantitySampleEntity.h>

@class NSString;

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)indices;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (_Bool)isConcreteEntity;
+ (id)privateSubEntities;
+ (Class)entityClassForEnumeration;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (CDUnknownBlockType)objectInsertionFilterForProfile:(id)arg1;
+ (_Bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 database:(id)arg6 error:(id *)arg7;
+ (_Bool)supportsObjectMerging;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;
+ (long long)_insertionEra;
+ (id)additionalPredicateForEnumeration;
+ (_Bool)insertValues:(id)arg1 series:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)enumerateRawDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (id)_propertiesToLeftJoin;
+ (id)_statisticsProperties;
+ (id)_insertDataObject:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(id *)arg4;
+ (void)_triggerABCForNotFinalSeriesSampleInsert:(id)arg1 reason:(id)arg2;
+ (long long)_notFinalInserationEra;
+ (_Bool)primitiveInsertValues:(id)arg1 seriesVersion:(long long)arg2 HFDKey:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg1 error:(id *)arg2;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (id)_quantitySampleWithID:(id)arg1 canBeUnfrozen:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalHFDData:(_Bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)deleteSeriesWithID:(id)arg1 deleteHFDData:(_Bool)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)_setStatisticsForQuantitySample:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (id)_statisticsWithHFDKey:(long long)arg1 statisticsCalculator:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (void)_setStatistics:(id)arg1 discreteQuantitySeriesSample:(id)arg2;
+ (void)_setStatistics:(id)arg1 cumulativeQuantitySeriesSample:(id)arg2;
+ (_Bool)enumerateDataWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)enumerateDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)deleteSeriesFromHFDWithKey:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 transaction:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)performSeriesWriteTransactionWithProfile:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)primitiveRemoveDatums:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (id)_updatedSampleForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 newCount:(long long)arg4 transaction:(id)arg5 profile:(id)arg6 error:(id *)arg7;
+ (id)_updatedSampleUUIDForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)_moveHFDKey:(long long)arg1 fromEntity:(id)arg2 toEntity:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)_replaceEntity:(id)arg1 UUIDToDelete:(id)arg2 newEntity:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)enumerateDataWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)unitTesting_updateInsertionEra;
+ (long long)unitTesting_insertionEra;
+ (_Bool)unitTesting_insertValues:(id)arg1 quantitySample:(id)arg2 seriesVersion:(long long)arg3 profile:(id)arg4 error:(id *)arg5;

- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;
- (void)willDeleteFromDatabase:(id)arg1;
- (id)HFDKeyWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)insertValues:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)_insertValues:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (long long)_canAddDatumInDatabase:(id)arg1 error:(id *)arg2;
- (id)_frozenUUIDForUnfrozenQuantitySample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id *)arg6;
- (id)_dataOriginProvenanceWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)_updatedSampleForQuantitySeriesSample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
- (_Bool)_getFirstTimeEndTimeCountWithTransaction:(id)arg1 HFDKey:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_setHFDKey:(long long)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)enumerateDataWithTransaction:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)startTimeEndTimeCountForSeriesWithTransaction:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_isSeriesInDatabase:(id)arg1;
- (id)_mergeCodableSeriesDataFromQuantitySampleSeries:(id)arg1 profile:(id)arg2 database:(id)arg3 error:(id *)arg4;
- (long long)_hasV1SeriesDataWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)_setInsertionEra:(long long)arg1 database:(id)arg2 error:(id *)arg3;
- (id)countForSeriesWithTransaction:(id)arg1 error:(id *)arg2;
- (id)freezeWithEndDate:(id)arg1 transaction:(id)arg2 profile:(id)arg3 error:(id *)arg4;
- (id)hasSeriesDataWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateDataInInterval:(id)arg1 transaction:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)unitTesting_setInsertionEra:(long long)arg1 profile:(id)arg2 error:(id *)arg3;

@end
