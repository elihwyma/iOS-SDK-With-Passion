/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSMutableArray.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray

{
    int _cd_rc;
    NSMutableArray *_realArray;
    NSManagedObject *_source;
    NSPropertyDescription *_relationship;
    struct _NSFaultingMutableArrayFlags _flags;
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
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeLastObject;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)valueForKey:(id)arg1;
- (Class)classForArchiver;
- (id)valueForKeyPath:(id)arg1;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;
- (void)willRead;
- (void)turnIntoFault;

@end
