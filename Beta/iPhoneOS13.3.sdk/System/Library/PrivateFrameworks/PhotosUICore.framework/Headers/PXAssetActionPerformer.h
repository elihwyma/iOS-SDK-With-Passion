/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionPerformer.h>

@class PXSelectionSnapshot;

@interface PXAssetActionPerformer : PXActionPerformer

{
    PXSelectionSnapshot *_selectionSnapshot;
}

@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;

@end
