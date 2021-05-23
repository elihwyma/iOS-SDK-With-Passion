/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMArray.h>

@class NSString, RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMManagedArray : RLMArray

{
    struct List _backingList;
    RLMRealm *_realm;
    struct RLMClassInfo *_objectInfo;
    struct RLMClassInfo *_ownerInfo;
    struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo>> _observationInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id objectiveCMetadata;
@property (nonatomic, readonly) RLMRealm *realm;
@property (nonatomic, readonly) struct RLMClassInfo *objectInfo;
@property (nonatomic, readonly) unsigned long long count;

+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)isInvalidated;
- (id).cxx_construct;
- (struct TableView)tableView;
- (_Bool)isBackedByList:(const struct List *)arg1;
- (unsigned long long)columnForProperty:(id)arg1;
- (id)initWithParent:(id)arg1 property:(id)arg2;
- (id)initWithList:(struct List)arg1 realm:(id)arg2 parentInfo:(struct RLMClassInfo *)arg3 property:(id)arg4;
- (id)objectsWithPredicate:(id)arg1;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
- (void)deleteObjectsFromRealm;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (id)averageOfProperty:(id)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)fastEnumerator;
- (id)minOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;

@end
