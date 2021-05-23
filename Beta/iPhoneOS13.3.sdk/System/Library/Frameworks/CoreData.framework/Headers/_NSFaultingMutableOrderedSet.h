/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSMutableDictionary, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet

{
    int _cd_rc;
    struct _NSFaultingMutableOrderedSetFlags _flags;
    id _realSet;
    NSManagedObject *_source;
    unsigned int *_orderKeys;
    id _grottyHack;
    NSMutableDictionary *_forcedKeys;
}

@property (nonatomic, readonly) NSManagedObject *source;
@property (nonatomic, readonly) NSPropertyDescription *relationship;
@property (nonatomic, readonly, getter=isFault) _Bool fault;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (id)initWithOrderedSet:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)containsObject:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)allObjects;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)isEqualToOrderedSet:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForArchiver;
- (id)valueForKeyPath:(id)arg1;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;
- (void)willRead;
- (void)turnIntoFault;
- (void)willReadWithContents:(id)arg1;
- (_Bool)_shouldProcessKVOChange;
- (_Bool)_isIdenticalFault:(id)arg1;
- (id)_orderedObjectsAndKeys;
- (_Bool)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id *)arg2;
- (void)_assignOrderKeysUsingCount:(unsigned int)arg1;
- (unsigned int)_orderKeyForObject:(id)arg1;
- (void)willChange;
- (void)_setProcessingIdempotentKVO:(_Bool)arg1;
- (void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1;
- (void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned long long **)arg3 reorderedIndexes:(char **)arg4;
- (id)_newOrderKeys;
- (_Bool)_hasOrderKeys;

@end
