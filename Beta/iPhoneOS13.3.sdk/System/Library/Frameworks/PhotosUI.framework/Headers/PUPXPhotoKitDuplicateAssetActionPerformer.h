/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer

{
    PUDuplicateActionController *_duplicateActionController;
    long long _action;
    CDStruct_1b6d18a9 _stillImageTime;
}

@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) long long action;
@property (nonatomic) CDStruct_1b6d18a9 stillImageTime;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
