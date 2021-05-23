/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer

+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)createAlertActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)createBarButtonItemForAssetCollection:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)systemImageNameForAssetCollection:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;

- (void)_promptDeleteMemoryConfirmatonWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_confirmationAlertTitleForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (id)_warningMessageForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (void)_promptBlacklistingConfirmatonForUserAction:(id)arg1 viewSpec:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
