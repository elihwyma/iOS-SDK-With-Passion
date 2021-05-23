/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageAsset.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIPathLazyImageAsset : UIImageAsset

{
    _Bool _imagesHaveBeenLoaded;
    _Bool _haveCGCacheImages;
    NSArray *_imagePaths;
}

@property (copy, nonatomic) NSArray *imagePaths;
@property (nonatomic) _Bool haveCGCacheImages;

- (id)imageWithConfiguration:(id)arg1;
- (void)_clearResolvedImageResources;
- (_Bool)_containsImagesInPath:(id)arg1;

@end
