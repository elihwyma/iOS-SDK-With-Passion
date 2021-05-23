/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSSet.h>

@interface TSUPointerSet : NSSet

{
    struct __CFSet *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)getObjects:(id *)arg1;
- (id)allObjects;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)initWithCFSet:(struct __CFSet *)arg1;

@end
