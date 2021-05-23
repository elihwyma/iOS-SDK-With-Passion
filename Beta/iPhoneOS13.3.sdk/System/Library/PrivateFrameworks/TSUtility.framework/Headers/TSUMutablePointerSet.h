/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSMutableSet.h>

@interface TSUMutablePointerSet : NSMutableSet

{
    struct __CFSet *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)getObjects:(id *)arg1;
- (void)removeAllObjects;
- (id)allObjects;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)initWithCFSet:(struct __CFSet *)arg1;

@end
