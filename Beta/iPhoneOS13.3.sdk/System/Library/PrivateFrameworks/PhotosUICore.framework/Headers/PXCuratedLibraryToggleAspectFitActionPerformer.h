/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryToggleAspectFitActionPerformer : PXCuratedLibraryActionPerformer

{
    PXGLayout *_layout;
}

@property (weak, nonatomic, readonly) PXGLayout *layout;

- (id)initWithViewModel:(id)arg1 layout:(id)arg2;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

@end
