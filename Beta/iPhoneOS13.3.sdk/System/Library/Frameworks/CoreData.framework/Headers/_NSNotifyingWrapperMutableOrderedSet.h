/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet

{
    NSManagedObject *_container;
    NSString *_key;
    NSMutableOrderedSet *_mutableOrderedSet;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)getObjects:(id *)arg1;
- (id)array;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)containsObject:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObjects:(id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (id)firstObject;
- (id)lastObject;
- (id)set;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)intersectOrderedSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)allObjects;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)reverseObjectEnumerator;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (_Bool)intersectsOrderedSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)isSubsetOfOrderedSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (_Bool)isEqualToOrderedSet:(id)arg1;
- (id)reversedOrderedSet;
- (id)valueForKey:(id)arg1;
- (Class)classForArchiver;
- (id)valueForKeyPath:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3;
- (id)_orderedObjectsAndKeys;
- (_Bool)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id *)arg2;

@end
