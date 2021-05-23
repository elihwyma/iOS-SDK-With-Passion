/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView

{
    long long _backgroundStyle;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIButton *_playbackButton;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, readonly) UIButton *playbackButton;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)_updateBackgroundStyle;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;

@end
