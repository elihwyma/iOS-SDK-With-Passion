/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosSharingTransitionContext.h>

@class PUAssetReference;

__attribute__((visibility("hidden")))
@interface PUOneUpPhotosSharingTransitionContext : PUPhotosSharingTransitionContext

{
    PUAssetReference *_currentAssetReference;
}

@property (retain, nonatomic) PUAssetReference *currentAssetReference;

- (id)keyAssetIndexPath;

@end
