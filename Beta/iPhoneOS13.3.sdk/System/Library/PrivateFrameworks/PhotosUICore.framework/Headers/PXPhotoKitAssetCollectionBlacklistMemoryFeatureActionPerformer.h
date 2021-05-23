/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@class NSString;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer

{
    NSString *_userResponse;
}

@property (retain, nonatomic) NSString *userResponse;

+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)confirmBlacklistingUserAction:(id)arg1 viewSpec:(id)arg2;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1;
- (id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2;
- (void)applyBlacklistFeatureWithActionType:(id)arg1;

@end
