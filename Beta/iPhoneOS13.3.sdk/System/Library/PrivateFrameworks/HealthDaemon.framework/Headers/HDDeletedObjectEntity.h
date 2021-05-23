/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataEntity.h>

@interface HDDeletedObjectEntity : HDDataEntity

+ (_Bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)preferredEntityType;
+ (id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)deletedObjectEntityForDeletedObject:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (Class)baseDataEntityClass;
+ (_Bool)requiresSampleTypePredicate;

@end
