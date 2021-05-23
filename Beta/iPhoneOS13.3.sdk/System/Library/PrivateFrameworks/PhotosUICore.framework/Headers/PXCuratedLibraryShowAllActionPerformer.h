/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryShowAllActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

{
    PXGLayout *_layout;
}

@property (weak, nonatomic) PXGLayout *layout;

- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
