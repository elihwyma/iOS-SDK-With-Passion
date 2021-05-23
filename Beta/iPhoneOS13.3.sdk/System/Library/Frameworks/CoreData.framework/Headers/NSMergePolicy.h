/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@interface NSMergePolicy : NSObject

{
    unsigned long long _type;
    void *_reserved2;
    void *_reserved3;
}

@property (readonly) unsigned long long mergeType;

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)errorMergePolicy;
+ (id)mergeByPropertyStoreTrumpMergePolicy;
+ (id)mergeByPropertyObjectTrumpMergePolicy;
+ (id)overwriteMergePolicy;
+ (id)rollbackMergePolicy;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (_Bool)resolveConflicts:(id)arg1 error:(id *)arg2;
- (id)initWithMergeType:(unsigned long long)arg1;
- (_Bool)_valuesOnObject:(id)arg1 matchAgainstValues:(id)arg2;
- (void)_mergeToManyUnionRelationshipsForObject:(id)arg1 andObject:(id)arg2;
- (void)_mergeToManyUnionRelationshipsForConstraintConflict:(id)arg1;
- (void)_mergeToManyRelationshipsForObject:(id)arg1 ontoObject:(id)arg2;
- (void)_mergeToManyRelationshipsForConstraintConflict:(id)arg1 withDesignatedOriginal:(id)arg2;
- (_Bool)_byPropertyObjectTrumpMergeObject:(id)arg1 ontoObject:(id)arg2 writeAll:(_Bool)arg3;
- (id)_electPreexistingDesignatedOriginalFrom:(id)arg1;
- (id)_electNewlyInsertedDesignatedOriginalFrom:(id)arg1;
- (void)_mergeValuesForObject:(id)arg1 ontoObject:(id)arg2;
- (id)_electDesignatedOriginalForConflict:(id)arg1;
- (_Bool)_mergeContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2;
- (_Bool)_eliminateContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2;
- (_Bool)_didSomethingElseResolveDBConflict:(id)arg1;
- (id)_unresolvedObjectsForContextConflict:(id)arg1;
- (id)_unresolvedConflictFor:(id)arg1;
- (_Bool)_byPropertyStoreTrumpResolveConstraintConflict:(id)arg1;
- (_Bool)_byPropertyObjectTrumpResolveConstraintConflict:(id)arg1;
- (_Bool)_rollbackResolveConstraintConflict:(id)arg1;
- (_Bool)_overwriteResolveConstraintConflict:(id)arg1;
- (_Bool)_resolveContextConstraintConflict:(id)arg1;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(_Bool)arg5;
- (void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2;
- (_Bool)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id *)arg2;
- (_Bool)resolveConstraintConflicts:(id)arg1 error:(id *)arg2;
- (_Bool)resolveConstraintConflict:(id)arg1 error:(id *)arg2;
- (_Bool)resolveConflict:(id)arg1;

@end
