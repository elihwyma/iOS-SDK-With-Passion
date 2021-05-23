/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UILabel, UIVisualEffect, UIVisualEffectView;

@interface CKNavigationButtonView : UIView

{
    _Bool _wantsLongPress;
    _Bool _buttonEnabled;
    _Bool _wantsVibrancy;
    CDUnknownBlockType _buttonTappedCallback;
    CDUnknownBlockType _buttonLongPressCallback;
    long long _joinButtonStyle;
    UIImage *_image;
    UIImage *_defaultImage;
    UIImage *_disabledImage;
    UIButton *_imageButton;
    UILabel *_textLabel;
    UIVisualEffectView *_vibrancyView;
    UIVisualEffect *_vibrancyEffect;
    UIVisualEffect *_disabledVibrancyEffect;
    NSString *_text;
}

@property (nonatomic) _Bool wantsLongPress;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *disabledImage;
@property (retain, nonatomic) UIButton *imageButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (retain, nonatomic) UIVisualEffect *disabledVibrancyEffect;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) CDUnknownBlockType buttonTappedCallback;
@property (copy, nonatomic) CDUnknownBlockType buttonLongPressCallback;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic, getter=isButtonEnabled) _Bool buttonEnabled;
@property (nonatomic) _Bool wantsVibrancy;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_buttonTapped:(id)arg1;
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(_Bool)arg4;
- (id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(_Bool)arg3;
- (void)_setupImageButton;
- (void)_buttonLongPressed:(id)arg1;

@end
