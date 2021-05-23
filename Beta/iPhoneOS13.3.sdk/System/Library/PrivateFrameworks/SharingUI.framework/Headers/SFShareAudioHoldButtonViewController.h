/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <SharingUI/SFShareAudioBaseViewController.h>

@class SFMediaPlayerView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SFShareAudioHoldButtonViewController : SFShareAudioBaseViewController

{
    unsigned int _colorCode;
    unsigned int _productID;
    UIImageView *_productImageView;
    SFMediaPlayerView *_productMovieView;
    UIImageView *_shareImageView;
    UILabel *_infoLabel;
    UIButton *_cancelButton;
}

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) SFMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)eventCancel:(id)arg1;
- (void)_updateDeviceVisual:(id)arg1;
- (id)_holdImageForPID:(unsigned int)arg1 colorCode:(unsigned int)arg2;

@end
