/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (IMAdditions)

+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;

- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5 distinct:(_Bool)arg6;
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 prefetchRelationships:(id)arg5;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5 prefetchRelationships:(id)arg6;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5;
- (void)im_pushSafeAccessState;
- (void)im_popSafeAccessState;
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;
- (id)newByClass:(Class)arg1;
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)entity:(id)arg1 withPredicate:(id)arg2;
- (void)im_performSafeAccess:(CDUnknownBlockType)arg1;
- (_Bool)im_isPerformingSafeAccess;
- (void)batchDeleteEntity:(id)arg1 matching:(id)arg2 prefetchRelationships:(id)arg3;

@end
