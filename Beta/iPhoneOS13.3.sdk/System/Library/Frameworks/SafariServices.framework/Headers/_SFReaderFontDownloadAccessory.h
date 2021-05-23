/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class UIButton, UIProgressView;

__attribute__((visibility("hidden")))
@interface _SFReaderFontDownloadAccessory : UIView

{
    _Bool _downloading;
    UIButton *_downloadButton;
    UIProgressView *_progressView;
    CDUnknownBlockType _tappedDownloadBlock;
}

@property (nonatomic, readonly) UIButton *downloadButton;
@property (nonatomic, readonly) UIProgressView *progressView;
@property (nonatomic, getter=isDownloading) _Bool downloading;
@property (copy, nonatomic) CDUnknownBlockType tappedDownloadBlock;

- (id)viewForLastBaselineLayout;
- (id)initWithTappedDownloadBlock:(CDUnknownBlockType)arg1;
- (void)_tappedDownloadButton:(id)arg1;

@end
