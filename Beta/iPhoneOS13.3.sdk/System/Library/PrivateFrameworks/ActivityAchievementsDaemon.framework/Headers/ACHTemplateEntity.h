/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <HDHealthEntity.h>

#import <ActivityAchievementsDaemon/Swift-Protocol.h>

@class NSString;

@interface ACHTemplateEntity : HDHealthEntity <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)syncEntityIdentifier;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)supportsSyncStore:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)createTableSQL;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)propertyForSyncProvenance;
+ (void)setSyncedTemplatesObserver:(id)arg1;
+ (_Bool)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (_Bool)removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allTemplatesWithProfile:(id)arg1 error:(id *)arg2;
+ (id)syncedTemplatesObserver;
+ (_Bool)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (_Bool)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;

@end
