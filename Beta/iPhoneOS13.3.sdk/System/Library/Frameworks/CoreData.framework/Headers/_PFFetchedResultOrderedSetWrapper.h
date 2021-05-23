/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet

{
    int _cd_rc;
    NSArray *_underlyingArray;
    _PFWeakReference *_weakmoc;
}

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
- (void)getObjects:(id *)arg1;
- (id)array;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (id)allObjects;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToOrderedSet:(id)arg1;
- (Class)classForArchiver;
- (void)willRead;
- (id)newArrayFromObjectIDs;
- (id)arrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1 andContext:(id)arg2;

@end
