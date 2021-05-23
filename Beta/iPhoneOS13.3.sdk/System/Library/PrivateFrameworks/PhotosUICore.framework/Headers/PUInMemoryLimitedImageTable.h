/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PUTemporaryImageTable.h>

@class NSCache;

@interface PUInMemoryLimitedImageTable : PUTemporaryImageTable

{
    NSCache *_memoryCache;
}

- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (id)imageForItemAtIndex:(unsigned long long)arg1;

@end
