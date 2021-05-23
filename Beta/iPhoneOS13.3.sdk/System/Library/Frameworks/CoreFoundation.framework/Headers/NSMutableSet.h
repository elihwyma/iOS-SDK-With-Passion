/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSSet.h>

@interface NSMutableSet : NSSet

+ (id)setWithCapacity:(unsigned long long)arg1;

- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)_mutate;
- (void)replaceObject:(id)arg1;
- (void)setObject:(id)arg1;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromSet:(id)arg1;
- (void)intersectOrderedSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)setArray:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;

@end
