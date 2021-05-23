/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)createTableSQL;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (_Bool)isConcreteEntity;
+ (_Bool)requiresSampleTypePredicate;
+ (_Bool)isBackedByTable;
+ (_Bool)acceptsObject:(id)arg1;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (id)_objectsWithIDs:(id)arg1 profile:(id)arg2;

- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;

@end
