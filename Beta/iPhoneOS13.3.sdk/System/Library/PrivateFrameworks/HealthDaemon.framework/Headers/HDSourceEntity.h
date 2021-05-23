/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncAnchor;
+ (id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 owningAppBundleIdentifier:(id)arg3 name:(id)arg4 options:(unsigned long long)arg5 isCurrentDevice:(_Bool)arg6 productType:(id)arg7 deleted:(_Bool)arg8 modificationDate:(id)arg9 provenance:(long long)arg10 database:(id)arg11 error:(id *)arg12;
+ (id)_firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_sourcesWithPredicate:(id)arg1 includeDeleted:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)sourcesWithPredicate:(id)arg1 orderingTerms:(id)arg2 includeDeleted:(_Bool)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 owningAppBundleIdentifier:(id)arg3 name:(id)arg4 options:(unsigned long long)arg5 isCurrentDevice:(_Bool)arg6 productType:(id)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 profile:(id)arg10 error:(id *)arg11;
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id *)arg2;
+ (id)firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(_Bool)arg2 database:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateBundleIdentifiersForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
+ (_Bool)enumerateBundleIdentifiersForSourcesForUUIDData:(id)arg1 transaction:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;

- (id)codableSourceWithEncoder:(id)arg1 error:(id *)arg2;
- (_Bool)_updateValues:(id)arg1 forProperties:(id)arg2 profile:(id)arg3 didUpdate:(_Bool *)arg4 error:(id *)arg5;
- (id)sourceWithProfile:(id)arg1 error:(id *)arg2;
- (id)codableSourceWithProfile:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDWithProfile:(id)arg1 error:(id *)arg2;
- (_Bool)setName:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (_Bool)setOptions:(unsigned long long)arg1 profile:(id)arg2 didUpdate:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)adoptAsLocalSourceWithBundleIdentifier:(id)arg1 UUID:(id)arg2 name:(id)arg3 productType:(id)arg4 profile:(id)arg5 error:(id *)arg6;
- (id)sourceBundleIdentifierInDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)deleteSourceWithDatabase:(id)arg1 error:(id *)arg2;

@end
