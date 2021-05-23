/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class NSDictionary, NSString, PUPhotoKitTrashActionPerformer;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer

{
    NSDictionary *_fetchResultsByAssetCollection;
    PUPhotoKitTrashActionPerformer *_trashActionPerformer;
}

@property (retain, nonatomic) NSDictionary *fetchResultsByAssetCollection;
@property (retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (_Bool)shouldShowConfirmation;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performTrashTask;

@end
