/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIButton.h>

@class UIAlertController, UIImage, UIViewController, VUICircularProgress, VUIDownloadButtonViewModel;

__attribute__((visibility("hidden")))
@interface VUIDownloadButton : VUIButton

{
    _Bool _showsTextInDownloadedState;
    _Bool _observingDownloadProgress;
    _Bool _wasDeleted;
    _Bool _wasCanceled;
    _Bool _isForLibrary;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _downloadStateChangeHandler;
    UIImage *_notDownloadedImage;
    UIImage *_connectingImage;
    UIImage *_downloadingImage;
    UIImage *_downloadedImage;
    VUIDownloadButtonViewModel *_viewModel;
    VUICircularProgress *_progressIndicator;
    UIAlertController *_deleteConfirmationAlertController;
}

@property (retain, nonatomic) UIImage *notDownloadedImage;
@property (retain, nonatomic) UIImage *connectingImage;
@property (retain, nonatomic) UIImage *downloadingImage;
@property (retain, nonatomic) UIImage *downloadedImage;
@property (retain, nonatomic) VUIDownloadButtonViewModel *viewModel;
@property (retain, nonatomic) VUICircularProgress *progressIndicator;
@property (nonatomic) _Bool observingDownloadProgress;
@property (nonatomic) _Bool wasDeleted;
@property (nonatomic) _Bool wasCanceled;
@property (nonatomic) _Bool isForLibrary;
@property (retain, nonatomic) UIAlertController *deleteConfirmationAlertController;
@property (nonatomic) _Bool showsTextInDownloadedState;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType downloadStateChangeHandler;

+ (id)defaultLayout;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setImage:(id)arg1;
- (id)_buttonPropertiesForState:(unsigned long long)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)updateWithElement:(id)arg1;
- (id)initWithAssetController:(id)arg1 layout:(id)arg2;
- (void)updateWithAssetController:(id)arg1;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;
- (void)_downloadButtonTapped:(id)arg1;
- (void)_layoutProgressIndicator;
- (void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2;
- (void)_updateDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_stopObservingDownloadProgress:(id)arg1;
- (void)_updateButtonToState:(unsigned long long)arg1;
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;
- (void)_startDownloadIfPossible;
- (void)_askUserAndDeleteIfNeeded;
- (void)_dismissConfirmationAlertController;
- (id)_notDownloadedImage;
- (id)_connectingImage;
- (id)_downloadingImage;
- (id)_downloadedImage;
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToConnectingWithProperties:(id)arg1;
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;
- (void)_setTitleWithProperties:(id)arg1;
- (void)_insertProgressIndicatorWithFrame:(struct CGRect)arg1;
- (void)_configureProgressIndicatorWithProperties:(id)arg1;
- (void)_startObservingDownloadProgress:(id)arg1;
- (id)_imageForDownloadState:(unsigned long long)arg1;
- (id)initWithPlayable:(id)arg1 layout:(id)arg2;
- (id)_pausedImage;

@end
