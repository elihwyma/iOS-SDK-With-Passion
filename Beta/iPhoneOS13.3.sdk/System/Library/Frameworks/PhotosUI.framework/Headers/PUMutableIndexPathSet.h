/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUIndexPathSet.h>

@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet

{
    NSMutableSet *_indexPaths;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (long long)count;
- (void)addIndexPath:(id)arg1;
- (void)removeIndexPath:(id)arg1;
- (void)removeAllIndexPaths;
- (_Bool)containsIndexPath:(id)arg1;
- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setIndexPathSet:(id)arg1;

@end
