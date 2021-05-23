/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/Swift-Protocol.h>

@class PICompositionController, PUPhotoEditIrisModelChange;

@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoEditIrisModel : PUViewModel <Swift>

{
    _Bool _videoEnabled;
    _Bool _ignoresUpdates;
    _Bool __assetHasAdjustments;
    unsigned short __editingVisibility;
    unsigned short __assetVisibility;
    id <PUEditableAsset> _asset;
    PICompositionController *_compositionController;
}

@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController;
@property (nonatomic, setter=_setEditingVisibility:) unsigned short _editingVisibility;
@property (nonatomic, readonly) unsigned short _assetVisibility;
@property (nonatomic, readonly) _Bool _assetHasAdjustments;
@property (nonatomic, readonly) PUPhotoEditIrisModelChange *currentChange;
@property (nonatomic, readonly) id <PUEditableAsset> asset;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, readonly) _Bool hasUnsavedChanges;
@property (nonatomic) _Bool ignoresUpdates;

+ (void)updateChangeRequestForRevert:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newViewModelChange;
- (id)initWithAsset:(id)arg1 compositionController:(id)arg2;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(_Bool)arg2 compositionController:(id)arg3;
- (void)notifyCannotSupportVideoEdits;
- (_Bool)reenablingLivePhotoShouldRemoveEdits;
- (void)updateChangeRequestForSave:(id)arg1;
- (void)compositionDidChange;
- (void)_updateAutoDisableStateIfNeeded;
- (_Bool)_hasLegacyIrisConflicts;
- (void)_setHidden:(_Bool)arg1 explicit:(_Bool)arg2 supportable:(_Bool)arg3;

@end
