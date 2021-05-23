/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLDetailItemViewControllerState, QLItem, QLRoundProgressView, UIImage, UIImageView;

@protocol QLDownloadingItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLDownloadingItemViewController

{
    _Bool _downloading;
    _Bool _downloaded;
    _Bool _didDisappear;
    id _progressSubscriber;
    QLRoundProgressView *_progressView;
    QLDetailItemViewControllerState *_readyForDownloadState;
    QLDetailItemViewControllerState *_cancelableDownloadingState;
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;
    QLDetailItemViewControllerState *_completedDownloadState;
    QLDetailItemViewControllerState *_previewLoadingState;
    UIImageView *_downloadImageView;
    UIImage *_cloudImage;
    QLItem *_previewItem;
    _Bool _showsLoadingPreviewSpinner;
    id <QLDownloadingItemViewControllerDelegate> _downloadingDelegate;
}

@property (nonatomic) _Bool downloaded;
@property (nonatomic, readonly) QLRoundProgressView *progressView;
@property (weak, nonatomic) id <QLDownloadingItemViewControllerDelegate> downloadingDelegate;
@property (nonatomic) _Bool showsLoadingPreviewSpinner;

- (void)viewDidLoad;
- (void)performAction;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)_startDownload:(_Bool)arg1;
- (_Bool)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2;
- (void)_updateFileSizeWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_toggleDownload:(_Bool)arg1;
- (void)_stopDownload:(_Bool)arg1;
- (void)_startDownloadOperation;
- (void)_setDownloading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_presentConnectivityAlert;

@end
