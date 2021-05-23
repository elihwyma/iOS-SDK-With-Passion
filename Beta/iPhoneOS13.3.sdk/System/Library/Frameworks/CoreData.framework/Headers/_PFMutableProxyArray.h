/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSMutableArray.h>

@class _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray

{
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray *_indicesVeneer;
}

+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (void)finalize;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (void)removeLastObject;
- (Class)classForCoder;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (Class)classForArchiver;
- (id)newArrayFromObjectIDs;
- (id)arrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_rehash;
- (id)initWithPFArray:(id)arg1;

@end
