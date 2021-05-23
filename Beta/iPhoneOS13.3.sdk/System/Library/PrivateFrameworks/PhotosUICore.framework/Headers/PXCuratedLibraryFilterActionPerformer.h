/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer

{
    PXGLayout *_layout;
}

@property (weak, nonatomic) PXGLayout *layout;

- (void)performUserInteractionTask;
- (_Bool)performerResetsAfterCompletion;

@end
