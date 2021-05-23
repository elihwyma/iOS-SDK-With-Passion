/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)uniquedColumns;
+ (long long)syncAnchorOfType:(long long)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(_Bool)arg3 resetInvalid:(_Bool)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)resetSyncAnchorsOfType:(long long)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)getSyncAnchorsOfType:(long long)arg1 anchorMap:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)resetSyncStore:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)updateSyncAnchorsWithMap:(id)arg1 type:(long long)arg2 updateDate:(id)arg3 store:(id)arg4 updatePolicy:(long long)arg5 resetInvalid:(_Bool)arg6 profile:(id)arg7 error:(id *)arg8;
+ (_Bool)getMinimumSyncAnchorsOfType:(long long)arg1 anchorMap:(id)arg2 updatedSince:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)updateSyncAnchorsWithMap:(id)arg1 type:(long long)arg2 store:(id)arg3 updatePolicy:(long long)arg4 resetInvalid:(_Bool)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)updateSyncAnchor:(long long)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 store:(id)arg4 updatePolicy:(long long)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)prepareSyncAnchorsForEntityIdentifiers:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_getAnchorsForProperty:(id)arg1 anchorMap:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)_predicateForSyncEntityIdentifier:(id)arg1 syncStore:(id)arg2;
+ (long long)_syncAnchorForProperty:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)_setSyncAnchor:(long long)arg1 updateDate:(double)arg2 options:(unsigned long long)arg3 updatePolicy:(long long)arg4 entityIdentifier:(id)arg5 store:(id)arg6 profile:(id)arg7 error:(id *)arg8;
+ (_Bool)_setAnchorsWithMap:(id)arg1 updateDate:(double)arg2 store:(id)arg3 updateOptions:(unsigned long long)arg4 updatePolicy:(long long)arg5 resetInvalid:(_Bool)arg6 profile:(id)arg7 error:(id *)arg8;
+ (id)_predicateForSyncStore:(id)arg1;
+ (_Bool)_setSyncAnchor:(long long)arg1 updateDate:(double)arg2 options:(unsigned long long)arg3 updatePolicy:(long long)arg4 entityIdentifier:(id)arg5 store:(id)arg6 transaction:(id)arg7 error:(id *)arg8;
+ (id)_predicateForSyncEntityIdentifier:(id)arg1;
+ (_Bool)updateSyncAnchor:(long long)arg1 type:(long long)arg2 updateDate:(id)arg3 entityIdentifier:(id)arg4 store:(id)arg5 updatePolicy:(long long)arg6 profile:(id)arg7 error:(id *)arg8;
+ (_Bool)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;

@end
