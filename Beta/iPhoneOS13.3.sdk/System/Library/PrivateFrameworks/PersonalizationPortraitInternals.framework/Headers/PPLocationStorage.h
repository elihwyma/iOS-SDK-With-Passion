/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase;

@interface PPLocationStorage : NSObject

{
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
}

- (id)init;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (_Bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 error:(id *)arg7;
- (_Bool)iterLocationRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(_Bool)arg4;
- (_Bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (id)_areasOfInterestForLocationRecordId:(long long)arg1 txnWitness:(id)arg2;
- (id)_contextualNamedEntitiesForLocationRecordId:(long long)arg1 txnWitness:(id)arg2;
- (id)_placemarkFromRecordQueryRowWithStatement:(id)arg1 columnMapping:(id)arg2 txnWitness:(id)arg3;
- (_Bool)_donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 txnWitness:(id)arg7;
- (void)_insertContextualNamedEntities:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3;
- (void)_insertAreasOfInterest:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3;
- (void)_deleteLocationsWithRowIdTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneLocationRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4;
- (_Bool)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;

@end
