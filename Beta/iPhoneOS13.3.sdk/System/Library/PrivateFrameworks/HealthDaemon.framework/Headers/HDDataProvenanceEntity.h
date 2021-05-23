/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)_derivedFlagsForSourceID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)uniquedColumns;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 originOSVersion:(CDStruct_2ec95fd7)arg4 localProductType:(id)arg5 localSystemBuild:(id)arg6 sourceVersion:(id)arg7 timeZoneName:(id)arg8 sourceID:(id)arg9 deviceID:(id)arg10 database:(id)arg11 error:(id *)arg12;
+ (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourceIDsWithProvenanceFromSourceIDs:(id)arg1 profile:(id)arg2 error:(id *)arg3;

@end
