/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotoLibrary/PLUIImageViewController.h>

@class ISAnimatedImageView, NSString, NSURL, PHAsset, PHLivePhotoView, PUBrowsingIrisPlayer, PUVideoPlayerView;

@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIImageViewController : PLUIImageViewController

{
    _Bool _isIris;
    _Bool _isAutoloop;
    _Bool _isAnimatedImage;
    _Bool _wantsLivePhotoResult;
    _Bool _wantsVideoURLResult;
    PHAsset *_asset;
    int __imageManagerVideoRequestID;
    int __animatedImageRequestID;
    id <PUPhotoPicker> _photoPicker;
    PUBrowsingIrisPlayer *__irisPlayer;
    PHLivePhotoView *__livePhotoView;
    PUVideoPlayerView *__autoloopView;
    ISAnimatedImageView *__animatedImageView;
    NSURL *__videoAssetURL;
    NSURL *__assetURL;
}

@property (retain, nonatomic) PUBrowsingIrisPlayer *_irisPlayer;
@property (retain, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView;
@property (retain, nonatomic, setter=_setAutoloopView:) PUVideoPlayerView *_autoloopView;
@property (retain, nonatomic, setter=_setAnimatedImageView:) ISAnimatedImageView *_animatedImageView;
@property (retain, nonatomic, setter=_setVideoAssetURL:) NSURL *_videoAssetURL;
@property (retain, nonatomic, setter=_setAssetURL:) NSURL *_assetURL;
@property (setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID;
@property (setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PUPhotoPicker> photoPicker;

- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)videoMaximumDuration;
- (id)videoQuality;
- (id)customBackgroundColor;
- (id)cancelButtonTitle;
- (id)exportPreset;
- (_Bool)uiipc_useTelephonyUI;
- (_Bool)forceNativeScreenScale;
- (_Bool)force1XCroppedImage;
- (id)maxZoomScaleOverride;
- (void)cropOverlayWasOKed:(id)arg1;
- (_Bool)wantsAutoloopUI;
- (_Bool)wantsLegacyImageUI;
- (_Bool)isDisplayedInPhotoPicker;
- (void)handleAutoloopSelected;
- (void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(_Bool)arg4;
- (void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2;
- (_Bool)doNotTranscode;
- (_Bool)viewImageBeforeSelecting;
- (_Bool)disableVideoTrimMessage;
- (id)chooseButtonTitle;
- (_Bool)imagePickerAllowsEditing;
- (unsigned long long)imagePickerSavingOptions;
- (void)performPhotoPickerSelection;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(_Bool)arg2;
- (id)initWithPhoto:(id)arg1 imagePickerProperties:(id)arg2 expectsLivePhoto:(_Bool)arg3;
- (void)setIrisPlayer:(id)arg1;
- (id)irisPlayerView:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)irisPlayerViewViewHostingGestureRecognizers:(id)arg1;
- (void)_loadAnimatedImage;
- (void)_handleAnimatedImagePreviewResult:(id)arg1;
- (void)_handleAnimatedImageResult:(id)arg1;
- (void)_loadAutoloopVideo;
- (void)_handleAutoloopPreviewImageResult:(id)arg1;
- (void)_handleAutoloopVideoResult:(id)arg1;
- (void)_loadLivePhoto;
- (void)_handleLivePhotoRequestResult:(id)arg1 info:(id)arg2;
- (void)_fetchPreviewImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchLivePhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAnimatedImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_generateGIFFromVideoURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_finishAutoloopDeliveryWithVideoURL:(id)arg1 gifURL:(id)arg2;
- (_Bool)_isPhotosPickerExtensionAvailable;

@end
