/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIUIStackView.h>

@class NSLayoutConstraint, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface VUIBuyButtonLockup : VUIUIStackView

{
    UILabel *_iAPLabel;
    UIButton *_button;
    NSLayoutConstraint *_buttonHeightConstraint;
    long long _lastOrientation;
    _Bool _hasIAP;
}

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) _Bool hasIAP;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_updateForPreferredContentSize;
- (_Bool)_isLargeContentSize;

@end
