/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSProgress;

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer

{
    NSProgress *_progress;
}

@property (retain, nonatomic) NSProgress *progress;

+ (id)editOperationManager;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)editOperationType;

- (void)performBackgroundTask;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
