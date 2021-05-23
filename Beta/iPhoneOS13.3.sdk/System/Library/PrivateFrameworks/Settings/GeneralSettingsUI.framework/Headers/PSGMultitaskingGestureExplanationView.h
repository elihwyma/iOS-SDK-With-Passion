/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <UIKit/UIView.h>

@class PSGUnderlineButton, UIColor, UILabel;

@interface PSGMultitaskingGestureExplanationView : UIView

{
    UILabel *_labels[4];
    PSGUnderlineButton *_videoLinkButton;
    double _sized;
    double _width;
    UIColor *_footerTextColor;
}

- (_Bool)isRTL;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (id)newRegionSampleLabelUnderlined;
- (id)_accessibilityLabels;

@end
