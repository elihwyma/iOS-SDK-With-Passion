/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUPointerSet.h>

@interface TSURetainedPointerSet : TSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)allObjects;

@end
