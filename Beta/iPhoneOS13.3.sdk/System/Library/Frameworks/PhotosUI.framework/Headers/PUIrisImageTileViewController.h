/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUImageTileViewController.h>

@class NSString, PHLivePhotoView, PUBrowsingViewModel;

@protocol PUIrisImageTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUIrisImageTileViewController : PUImageTileViewController

{
    struct {
        _Bool respondsToDidBeginPlaying;
        _Bool respondsToWillEndPlaying;
        _Bool respondsToDidEndPlaying;
        _Bool respondsToDidEndVitality;
        _Bool respondsToDidBeginHinting;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToDelegateForGestureRecognizer;
    } _delegateFlags;
    CDUnknownBlockType _ppt_didEndPlayingHandler;
    id <PUIrisImageTileViewControllerDelegate> _delegate;
    PUBrowsingViewModel *_browsingViewModel;
    PHLivePhotoView *__livePhotoView;
}

@property (nonatomic, readonly) PHLivePhotoView *_livePhotoView;
@property (weak, nonatomic) id <PUIrisImageTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loadView;
- (void)removeAllAnimations;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)applyLayoutInfo:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)assetViewModelDidChange;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_setLivePhotoView:(id)arg1;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (id)generateAssetTransitionInfo;
- (void)livePhotoViewDidEndPlayingVitality:(id)arg1;
- (void)livePhotoViewDidBeginHinting:(id)arg1;
- (void)addToTilingView:(id)arg1;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)_assetFocusValueDidChange;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)ppt_playLivePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_playVitalityHintIfNeeded;
- (void)_updatePlaybackGestureRecognizer;

@end
