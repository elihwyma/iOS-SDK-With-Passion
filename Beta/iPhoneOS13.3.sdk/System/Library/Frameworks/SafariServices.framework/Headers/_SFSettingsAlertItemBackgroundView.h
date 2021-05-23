/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertItemBackgroundView : UIView

{
    UIVisualEffectView *_highlightView;
    NSLayoutConstraint *_highlightToTopConstraint;
    NSLayoutConstraint *_highlightToLeadingConstraint;
    NSLayoutConstraint *_highlightToLeadingWithSpaceConstraint;
    NSLayoutConstraint *_highlightPixelWidthConstraint;
    NSLayoutConstraint *_highlightPixelHeightConstraint;
    long long _mode;
}

@property (nonatomic) long long mode;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)_highlightEffect;

@end
