/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDObjectAuthorizationEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;
+ (_Bool)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id *)arg2;
+ (id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 skipErrors:(_Bool)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_insertCodableObjectAuthorizations:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;

@end
