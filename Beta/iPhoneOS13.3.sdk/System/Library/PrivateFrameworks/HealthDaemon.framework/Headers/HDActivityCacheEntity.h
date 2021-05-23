/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity

+ (id)indices;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (_Bool)isConcreteEntity;
+ (_Bool)supportsObjectMerging;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;
+ (id)activityCacheForIndex:(long long)arg1 profile:(id)arg2 encodingOptions:(id)arg3 error:(id *)arg4;

@end
