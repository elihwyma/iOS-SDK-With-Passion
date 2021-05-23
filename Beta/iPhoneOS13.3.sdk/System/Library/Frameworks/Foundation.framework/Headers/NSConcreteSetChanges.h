/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSetChanges.h>

@class NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface NSConcreteSetChanges : NSSetChanges

{
    NSSet *_backing;
    NSMutableArray *_changes;
    _Bool _backingIsMutable;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)initWithSet:(id)arg1;
- (unsigned long long)changeCount;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addChange:(id)arg1;
- (void)_willChange;
- (void)filterObjectsWithTest:(CDUnknownBlockType)arg1;
- (void)transformObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_fault;

@end
