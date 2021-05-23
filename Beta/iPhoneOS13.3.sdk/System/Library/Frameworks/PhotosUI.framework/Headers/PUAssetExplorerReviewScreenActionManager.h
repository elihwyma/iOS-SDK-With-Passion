/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionManager.h>

@class PUUUIDSelectionManager;

@protocol PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager

{
    id <PUAssetExplorerReviewScreenActionManagerDelegate> _reviewScreenActionManagerDelegate;
    id <PUReviewAssetProvider> _reviewAssetProvider;
    PUUUIDSelectionManager *_selectionManager;
    PUUUIDSelectionManager *_disableLivePhotosSelectionManager;
    unsigned long long __sourceType;
}

@property (nonatomic, readonly) unsigned long long _sourceType;
@property (weak, nonatomic) id <PUAssetExplorerReviewScreenActionManagerDelegate> reviewScreenActionManagerDelegate;
@property (weak, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider;
@property (nonatomic, readonly) PUUUIDSelectionManager *selectionManager;
@property (nonatomic, readonly) PUUUIDSelectionManager *disableLivePhotosSelectionManager;

- (id)initWithSourceType:(unsigned long long)arg1;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (Class)_actionPerformerClassForActionType:(unsigned long long)arg1;
- (_Bool)_hasReviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;
- (unsigned long long)_reviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;

@end
