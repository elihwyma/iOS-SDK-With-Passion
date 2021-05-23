/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <SharingUI/SFShareAudioBaseViewController.h>

@class MTMaterialView, SFMediaPlayerView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface SFShareAudioConfirmViewController : SFShareAudioBaseViewController

{
    MTMaterialView *_confirmButtonMaterialView;
    unsigned int _colorCode;
    unsigned int _productID;
    UIImageView *_productImageView;
    SFMediaPlayerView *_productMovieView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIImageView *_shareImageView;
}

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) SFMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)eventCancel:(id)arg1;
- (void)_updateDeviceVisual:(id)arg1;
- (void)eventConfirm:(id)arg1;

@end
