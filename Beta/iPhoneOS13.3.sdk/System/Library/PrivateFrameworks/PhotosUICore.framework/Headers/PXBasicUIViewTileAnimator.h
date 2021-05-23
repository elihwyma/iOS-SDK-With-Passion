/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBasicTileAnimator.h>

@class NSCountedSet;

@interface PXBasicUIViewTileAnimator : PXBasicTileAnimator

{
    NSCountedSet *_suspendedTiles;
}

+ (void)animateWithOptions:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

- (void)prepareTile:(id)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3;
- (void)animateTile:(id)arg1 toGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)suspendAnimationsForTile:(id)arg1;
- (void)resumeAnimationsForTile:(id)arg1;
- (void)_applyGeometry:(struct PXTileGeometry)arg1 toTile:(id)arg2;
- (void)_applyGeometry:(struct PXTileGeometry)arg1 userData:(id)arg2 toTile:(id)arg3;

@end
