/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUCircleView, HULegibilityLabel, NSString, UIColor, UIImageView;

@interface HUCameraStatusOverlayView : UIView

{
    _Bool _isDisplayingForSingleCamera;
    _Bool _didUpdateConstraints;
    NSString *_statusString;
    UIColor *_statusColor;
    HULegibilityLabel *_statusLabel;
    HUCircleView *_statusIndicator;
    UIImageView *_alertBadge;
}

@property (retain, nonatomic) HULegibilityLabel *statusLabel;
@property (retain, nonatomic) HUCircleView *statusIndicator;
@property (nonatomic) _Bool didUpdateConstraints;
@property (retain, nonatomic) UIImageView *alertBadge;
@property (copy, nonatomic) NSString *statusString;
@property (retain, nonatomic) UIColor *statusColor;
@property (nonatomic) _Bool isDisplayingForSingleCamera;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_chevronImage;
- (void)updateStatusForCameraProfile:(id)arg1;
- (void)updateStatusLabelBounds;
- (void)setBadgeStatus:(unsigned long long)arg1;
- (id)_exclamationImage;

@end
