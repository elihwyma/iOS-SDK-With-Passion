/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBLockOverlayStylePropertiesFactory, UIButton, UILabel, UIResizableView, _UILegibilitySettings;

@protocol SBUILockOverlayViewDelegate;

@interface SBUILockOverlayView : SBFTouchPassThroughView

{
    id <SBUILockOverlayViewDelegate> _delegate;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    unsigned long long _style;
    _UILegibilitySettings *_legibilitySettings;
}

@property (weak, nonatomic) id <SBUILockOverlayViewDelegate> delegate;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UIButton *actionButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)_subtitleFont;
- (void)_buttonPressed;
- (double)_maxLabelWidth;
- (id)_actionFont;
- (id)_legibilitySettingsForStyle:(unsigned long long)arg1;
- (void)_sizeView:(id)arg1 forFixedWith:(_Bool)arg2;
- (unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;

@end
