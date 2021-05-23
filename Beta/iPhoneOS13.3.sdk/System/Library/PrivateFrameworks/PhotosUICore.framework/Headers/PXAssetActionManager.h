/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionManager.h>

@class PXSectionedSelectionManager;

@interface PXAssetActionManager : PXActionManager

{
    PXSectionedSelectionManager *_selectionManager;
}

@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (id)init;
- (id)actionPerformerForActionType:(id)arg1;
- (id)initWithSelectionManager:(id)arg1;
- (_Bool)canPerformAssetVariationActions;
- (_Bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;
- (void)px_registerAdditionalPerformerClasses;

@end
