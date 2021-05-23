/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSObject, NSString, PLRoundProgressView, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, UIButton, UILabel;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PUProgressIndicatorTileViewController : PUTileViewController

{
    _Bool __needsUpdateProgressViewStyle;
    _Bool __needsUpdateStatus;
    _Bool __needsUpdateSizeClass;
    _Bool __needsUpdateStatusViews;
    _Bool __isProgressViewVisible;
    _Bool __didStartProgressLogging;
    PUAssetSharedViewModel *_assetSharedViewModel;
    PUBrowsingVideoPlayer *_videoPlayer;
    long long __progressViewStyle;
    PUOperationStatus *__status;
    long long __sizeClass;
    PLRoundProgressView *__progressView;
    UIButton *__errorButton;
    UILabel *__debugProgressLabel;
}

@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) _Bool _needsUpdateProgressViewStyle;
@property (nonatomic, setter=_setNeedsUpdateStatus:) _Bool _needsUpdateStatus;
@property (nonatomic, setter=_setNeedsUpdateSizeClass:) _Bool _needsUpdateSizeClass;
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) _Bool _needsUpdateStatusViews;
@property (nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle;
@property (copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status;
@property (nonatomic, setter=_setSizeClass:) long long _sizeClass;
@property (retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView;
@property (nonatomic, setter=_setProgressViewVisible:) _Bool _isProgressViewVisible;
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton;
@property (retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel;
@property (nonatomic, readonly) NSObject<OS_os_log> *_progressLog;
@property (nonatomic, getter=_didStartProgressLogging, setter=_setDidStartProgressLogging:) _Bool _didStartProgressLogging;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_loadErrorIconForSizeClass:(long long)arg1;
+ (struct CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1;

- (void)viewDidLoad;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateSubviewOrdering;
- (void)becomeReusable;
- (void)_invalidateStatus;
- (void)_invalidateSizeClass;
- (void)_updateSizeClassIfNeeded;
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
