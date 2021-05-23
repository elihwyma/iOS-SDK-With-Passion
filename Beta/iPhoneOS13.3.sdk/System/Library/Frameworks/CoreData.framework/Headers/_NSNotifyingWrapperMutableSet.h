/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSMutableSet.h>

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableSet : NSMutableSet

{
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (id)description;
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
- (_Bool)isSubsetOfSet:(id)arg1;
- (id)valueForKey:(id)arg1;
- (Class)classForArchiver;
- (id)valueForKeyPath:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3;

@end
