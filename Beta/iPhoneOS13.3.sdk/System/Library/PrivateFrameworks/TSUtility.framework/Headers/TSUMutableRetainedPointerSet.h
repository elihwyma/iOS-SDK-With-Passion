/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUMutablePointerSet.h>

@interface TSUMutableRetainedPointerSet : TSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)allObjects;

@end
