/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSArray.h>

@class NSCachingFetchRequest, NSManagedObjectContext, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray

{
    int _cd_rc;
    unsigned int _count;
    _PFArray *_array;
    unsigned int *_entryFlags;
    NSManagedObjectContext *_moc;
    NSCachingFetchRequest *_request;
    unsigned int _batchSize;
    unsigned int *_LRUBatches;
    struct _PFBatchFaultingArrayFlags _flags;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (Class)classForCoder;
- (_Bool)isEqualToArray:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)valueForKey:(id)arg1;
- (Class)classForArchiver;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)valueForKeyPath:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;
- (id)newArrayFromObjectIDs;
- (id)arrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)_newSubArrayInRange:(struct _NSRange)arg1 asMutable:(_Bool)arg2;
- (void)_internalDealloc;
- (id)retainedObjectAtIndex:(unsigned long long)arg1;
- (void)_turnAllBatchesIntoObjects;
- (void)_turnAllBatchesIntoFaults;
- (id)_pinnedObjectAtIndex:(unsigned long long)arg1;

@end
