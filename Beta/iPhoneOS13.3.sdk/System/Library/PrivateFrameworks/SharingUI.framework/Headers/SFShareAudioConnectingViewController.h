/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <SharingUI/SFShareAudioBaseViewController.h>

@class SFMediaPlayerView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SFShareAudioConnectingViewController : SFShareAudioBaseViewController

{
    unsigned int _productIDActive;
    unsigned int _colorCode;
    unsigned int _productID;
    UIImageView *_productImageView;
    SFMediaPlayerView *_productMovieView;
    UIImageView *_shareImageView;
    UIView *_progressView;
    UIActivityIndicatorView *_progressActivity;
    UILabel *_progressLabel;
    UIButton *_cancelButton;
}

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) SFMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIActivityIndicatorView *progressActivity;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)sessionProgressEvent:(int)arg1 info:(id)arg2;
- (void)eventCancel:(id)arg1;
- (void)_updateDeviceVisual:(id)arg1;
- (void)_updateForDeviceInfo;

@end
