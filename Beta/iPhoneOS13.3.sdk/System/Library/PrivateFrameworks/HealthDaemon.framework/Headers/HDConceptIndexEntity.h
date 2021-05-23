/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDConceptIndexEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)stateWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)removeAllConceptIndexEntriesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)storeState:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_insertConceptIndexEntry:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_propertiesForEntity;
+ (_Bool)_enumerateConceptIndexEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_conceptIndexEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (id)_keyValueDomainWithProfile:(id)arg1;
+ (_Bool)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeConceptIndexEntriesForSampleUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allConceptIndexEntriesWithProfile:(id)arg1 error:(id *)arg2;
+ (id)conceptIndexEntriesForSampleUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)conceptIndexEntriesForSampleUUID:(id)arg1 type:(unsigned long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)sampleUUIDsForConceptIdentifier:(long long)arg1 keyPaths:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end
