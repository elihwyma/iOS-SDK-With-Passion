/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingControllerComposition.h>

@class NSSet;

@interface PXTilingControllerDefaultComposition : PXTilingControllerComposition

{
    NSSet *_tilingControllers;
}

@property (copy, nonatomic) NSSet *tilingControllers;

- (void)updateComposition;

@end
