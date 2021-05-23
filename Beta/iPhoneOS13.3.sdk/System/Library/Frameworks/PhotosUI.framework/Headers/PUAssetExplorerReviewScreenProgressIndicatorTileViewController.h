/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PLRoundProgressView, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenProgressIndicatorTileViewController : PUTileViewController

{
    _Bool __needsUpdateProgressViewStyle;
    _Bool __needsUpdateStatus;
    _Bool __needsUpdateStatusViews;
    _Bool __isProgressViewVisible;
    PUAssetSharedViewModel *_assetSharedViewModel;
    PUBrowsingVideoPlayer *_videoPlayer;
    long long __progressViewStyle;
    PUOperationStatus *__status;
    PLRoundProgressView *__progressView;
    UIButton *__errorButton;
    UILabel *__debugProgressLabel;
}

@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) _Bool _needsUpdateProgressViewStyle;
@property (nonatomic, setter=_setNeedsUpdateStatus:) _Bool _needsUpdateStatus;
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) _Bool _needsUpdateStatusViews;
@property (nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle;
@property (copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status;
@property (retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView;
@property (nonatomic, setter=_setProgressViewVisible:) _Bool _isProgressViewVisible;
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton;
@property (retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_loadErrorIcon;
+ (struct CGSize)progressIndicatorTileSize;

- (void)viewDidLoad;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateSubviewOrdering;
- (void)becomeReusable;
- (void)_invalidateStatus;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handleErrorButtonTap:(id)arg1;
- (void)_invalidateProgressViewStyle;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_invalidateStatusViews;
- (void)_updateStatusViewsIfNeeded;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;

@end
