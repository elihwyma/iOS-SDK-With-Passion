/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout, PXGSpriteReference;

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer

{
    PXGLayout *_layout;
    PXGSpriteReference *_hitSpriteReference;
}

@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) PXGSpriteReference *hitSpriteReference;

- (void)performUserInteractionTask;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 layout:(id)arg3 hitSpriteReference:(id)arg4;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

@end
