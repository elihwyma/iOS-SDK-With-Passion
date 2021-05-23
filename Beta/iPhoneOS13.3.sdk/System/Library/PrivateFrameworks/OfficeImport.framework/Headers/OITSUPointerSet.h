/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSSet.h>

__attribute__((visibility("hidden")))
@interface OITSUPointerSet : NSSet

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
