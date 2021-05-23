/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleEntity.h>

@interface HDQuantitySampleEntity : HDSampleEntity

+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (long long)compareForReplacmentWithObject:(id)arg1 existingObject:(id)arg2;

@end
