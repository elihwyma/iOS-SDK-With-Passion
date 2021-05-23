/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIApplication.h>

@protocol PXNotificationSuppressionContextManager;

@interface UIApplication (PhotosUICore)

@property (nonatomic, readonly) id <PXNotificationSuppressionContextManager> notificationSuppressionContextManager;

- (void)px_navigateToWelcomeCloudViewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)px_navigateToMomentsViewRevealingAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)px_navigateToRevealDroppedAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)px_navigateToOneUpShowingAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_px_navigateToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)px_navigateToMomentsViewRevealingAssetWithUUID:(id)arg1 openOneUp:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)failedTest:(id)arg1 withFailureFormat:(id)arg2;

@end
