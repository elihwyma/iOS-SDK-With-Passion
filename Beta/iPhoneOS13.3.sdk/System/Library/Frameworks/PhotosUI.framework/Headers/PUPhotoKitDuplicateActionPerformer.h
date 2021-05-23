/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer

{
    PUDuplicateActionController *_duplicateActionController;
    long long _action;
    CDStruct_1b6d18a9 _newStillImageTime;
}

@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) long long action;
@property (nonatomic) CDStruct_1b6d18a9 newStillImageTime;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
