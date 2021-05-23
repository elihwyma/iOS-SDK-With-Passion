/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSArray.h>

@class _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFArray : NSArray

{
    int _cd_rc;
    unsigned int _count;
    id *_array;
    _PFWeakReference *_weakContext;
    struct _PFArrayFlags _flags;
}

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (Class)classForCoder;
- (unsigned int)_flags;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (Class)classForArchiver;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3 andContext:(id)arg4;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3;
- (id)newArrayFromObjectIDs;
- (id *)_objectsPointer;
- (id)arrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (void)_setShouldRelease:(_Bool)arg1;
- (void)_setShouldUseExtendedRelease:(_Bool)arg1;

@end
