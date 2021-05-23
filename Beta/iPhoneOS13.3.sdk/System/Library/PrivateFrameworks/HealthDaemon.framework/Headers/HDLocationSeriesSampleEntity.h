/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSeriesSampleEntity.h>

@class NSString;

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)createTableSQL;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (_Bool)isConcreteEntity;
+ (_Bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)supportsObjectMerging;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;
+ (_Bool)participatesInInsertion;
+ (_Bool)isBackedByTable;
+ (_Bool)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)_insertCodableSeriesDataFromObject:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateLocationDataInDatabase:(id)arg1 HFDKey:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_routeSampleWithID:(id)arg1 canBeUnfrozen:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

- (_Bool)enumerateLocationDataInDatabase:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;
- (void)willDeleteFromDatabase:(id)arg1;
- (id)freezeWithDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (_Bool)insertLocationData:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_frozenUUIDForUnfrozenSeriesSample:(id)arg1 HFDKey:(long long)arg2 frozenStartTime:(double)arg3 frozenEndTime:(double)arg4 frozenCount:(long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id *)arg8;
- (id)sampleCountForSeriesInDatabase:(id)arg1 error:(id *)arg2;
- (id)timePeriodForSeriesInDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateLocationDataFromTimestamp:(double)arg1 toTimestamp:(double)arg2 database:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

@end
