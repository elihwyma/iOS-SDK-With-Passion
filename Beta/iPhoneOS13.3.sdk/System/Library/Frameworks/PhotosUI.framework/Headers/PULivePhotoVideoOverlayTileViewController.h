/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class ISWrappedAVPlayer, NSArray, NSString, PHLivePhotoView, PUAssetReference, PUBrowsingViewModel, PUMergedLivePhotosVideo, PUModelTileTransform, PUOneUpMergedVideoProvider, PXImageLayerModulator, PXImageModulationManager, UIImpactFeedbackGenerator, UIView;

@protocol PULivePhotoVideoOverlayTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PULivePhotoVideoOverlayTileViewController : PUTileViewController <Swift>

{
    _Bool _isPresentedForSecondScreen;
    _Bool _willEndCurrentPlayback;
    PUBrowsingViewModel *_browsingViewModel;
    PUOneUpMergedVideoProvider *_mergedVideoProvider;
    id <PULivePhotoVideoOverlayTileViewControllerDelegate> _delegate;
    PXImageModulationManager *_imageModulationManager;
    NSArray *_playbackGestureRecognizers;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    PUMergedLivePhotosVideo *_mergedVideo;
    UIView *_containerView;
    PHLivePhotoView *_livePhotoView;
    ISWrappedAVPlayer *_videoPlayer;
    id _videoPlayerTimeObserver;
    PUModelTileTransform *_modelTileTransform;
    PXImageLayerModulator *_imageLayerModulator;
    PUAssetReference *_playbackAssetReference;
}

@property (nonatomic, readonly) NSArray *playbackGestureRecognizers;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, readonly) PUMergedLivePhotosVideo *mergedVideo;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) PHLivePhotoView *livePhotoView;
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (retain, nonatomic) id videoPlayerTimeObserver;
@property (retain, nonatomic) PUModelTileTransform *modelTileTransform;
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator;
@property (retain, nonatomic) PUAssetReference *playbackAssetReference;
@property (nonatomic) _Bool willEndCurrentPlayback;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (nonatomic) _Bool isPresentedForSecondScreen;
@property (weak, nonatomic) id <PULivePhotoVideoOverlayTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PXImageModulationManager *imageModulationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)loadView;
- (id)gestureRecognizers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)_updatePlaybackEnabled;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)setMergedVideo:(id)arg1;
- (void)_updateLivePhotoViewFrame;
- (void)_updateLivePhotoViewPhoto;
- (void)_updateImageLayerModulator;
- (void)_updateImageLayerModulatorInput;
- (void)_updateMergedVideo;
- (void)_videoCurrentTimeDidChange:(CDStruct_1b6d18a9)arg1;

@end
