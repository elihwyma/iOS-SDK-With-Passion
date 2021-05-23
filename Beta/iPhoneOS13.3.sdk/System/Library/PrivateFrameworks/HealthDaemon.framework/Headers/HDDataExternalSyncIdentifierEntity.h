/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (_Bool)populateSyncInfoForLocalSourceID:(long long)arg1 externalSyncObjectCode:(long long)arg2 syncIdentifier:(id)arg3 deleted:(_Bool)arg4 database:(id)arg5 objectIDOut:(id *)arg6 errorOut:(id *)arg7;
+ (_Bool)populateSyncInfoForObjectID:(long long)arg1 database:(id)arg2 localSourceIDOut:(long long *)arg3 externalSyncObjectCodeOut:(long long *)arg4 syncIdentifierOut:(id *)arg5 syncVersionOut:(id *)arg6 deletedOut:(_Bool *)arg7 errorOut:(id *)arg8;
+ (_Bool)insertSyncIdentifierWithProfile:(id)arg1 database:(id)arg2 objectID:(long long)arg3 localSourceID:(long long)arg4 externalSyncObjectCode:(long long)arg5 syncIdentifier:(id)arg6 syncVersion:(id)arg7 deleted:(_Bool)arg8 errorOut:(id *)arg9;
+ (_Bool)enumerateValuesWithProfile:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;

@end
