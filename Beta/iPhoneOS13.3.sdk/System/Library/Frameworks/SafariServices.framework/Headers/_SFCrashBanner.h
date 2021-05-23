/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UIVisualEffectView, _SFBarTheme;

@interface _SFCrashBanner : UIView

{
    UIVisualEffectView *_backdrop;
    UIVisualEffectView *_contentEffectView;
    UIView *_separator;
    UILabel *_label;
    struct CGSize _cachedLabelLayoutSize;
    _SFBarTheme *_theme;
    UIButton *_closeButton;
}

@property (retain, nonatomic) _SFBarTheme *theme;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *backdropGroupName;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutCloseButton;
- (_Bool)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1;
- (struct CGSize)_labelLayoutSizeForWidth:(double)arg1;

@end
