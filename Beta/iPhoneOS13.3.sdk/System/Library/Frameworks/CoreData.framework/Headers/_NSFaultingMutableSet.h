/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet

{
    int _cd_rc;
    struct _NSFaultingMutableSetFlags _flags;
    id _realSet;
    NSManagedObject *_source;
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
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)allObjects;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (_Bool)isEqualToSet:(id)arg1;
- (id)anyObject;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
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

@end
