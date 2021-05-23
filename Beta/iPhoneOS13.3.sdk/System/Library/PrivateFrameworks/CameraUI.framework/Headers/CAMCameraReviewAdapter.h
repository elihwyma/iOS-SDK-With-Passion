/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIViewController;

@protocol CAMCameraReviewViewController;

@interface CAMCameraReviewAdapter : NSObject

{
    NSMutableArray *__pendingAssetsForReview;
    UIViewController<CAMCameraReviewViewController> *_cachedReviewViewController;
}

@property (nonatomic, readonly) NSMutableArray *_pendingAssetsForReview;
@property (retain, nonatomic, getter=_cachedReviewViewController, setter=_setCachedReviewViewController:) UIViewController<CAMCameraReviewViewController> *cachedReviewViewController;
@property (nonatomic, readonly) UIViewController<CAMCameraReviewViewController> *cameraReviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)cameraReviewViewControllerClass;
+ (id)reviewAssetForPhoto:(id)arg1 withProperties:(id)arg2;
+ (id)reviewAssetForLivePhoto:(id)arg1 withProperties:(id)arg2;
+ (id)reviewAssetForAVAsset:(id)arg1 audioMix:(id)arg2 properties:(id)arg3;

- (id)init;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;

@end
