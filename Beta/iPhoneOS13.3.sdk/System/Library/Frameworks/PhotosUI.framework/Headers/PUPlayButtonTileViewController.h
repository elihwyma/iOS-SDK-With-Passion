/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUBrowsingViewModel, UIView;

@protocol PUPlayButtonTileViewControllerDelegate, PXVideoOverlayButton;

__attribute__((visibility("hidden")))
@interface PUPlayButtonTileViewController : PUTileViewController

{
    struct {
        _Bool respondsToShouldShowPauseButton;
        _Bool respondsToDidTapButton;
        _Bool respondsToDelayForButtonAnimation;
    } _delegateFlags;
    _Bool __shouldShowPlayButton;
    _Bool __shouldSuppressButtonUpdates;
    id <PUPlayButtonTileViewControllerDelegate> _delegate;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetViewModel *_assetViewModel;
    PUBrowsingVideoPlayer *__browsingVideoPlayer;
    UIView<PXVideoOverlayButton> *__playButton;
}

@property (retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer;
@property (retain, nonatomic, setter=_setPlayButton:) UIView<PXVideoOverlayButton> *_playButton;
@property (nonatomic, setter=_setShouldShowPlayButton:) _Bool _shouldShowPlayButton;
@property (nonatomic, setter=_setShouldSuppressButtonUpdates:) _Bool _shouldSuppressButtonUpdates;
@property (nonatomic, readonly) _Bool canShowPauseButton;
@property (weak, nonatomic) id <PUPlayButtonTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)playButtonTileSize;

- (void)dealloc;
- (id)loadView;
- (void)_playButtonTapped:(id)arg1;
- (void)becomeReusable;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateButtonAnimated:(_Bool)arg1;
- (void)_setShouldShowPlayButton:(_Bool)arg1 animated:(_Bool)arg2;

@end
