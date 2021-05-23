/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIButton, UIFont;

@protocol EKUIEventStatusButtonsViewDelegate;

@interface EKUIEventStatusButtonsView : UIView

{
    NSArray *_buttons;
    NSArray *_actions;
    UIFont *_font;
    double _outsideMargin;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    double _baselineFromBoundsTop;
    _Bool _forcesSingleButtonToCenter;
    NSArray *_currentConstraints;
    _Bool _disableButtonHighlights;
    _Bool _shouldUseVerticalLayout;
    id <EKUIEventStatusButtonsViewDelegate> _delegate;
    long long _selectedAction;
    long long _textSizeMode;
    struct UIEdgeInsets _buttonsTouchInsets;
}

@property (weak, nonatomic) id <EKUIEventStatusButtonsViewDelegate> delegate;
@property (nonatomic) long long selectedAction;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic, readonly) UIButton *centerButton;
@property (nonatomic) struct UIEdgeInsets buttonsTouchInsets;
@property (nonatomic) long long textSizeMode;
@property (nonatomic) _Bool disableButtonHighlights;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic) _Bool shouldUseVerticalLayout;

+ (id)buttonTitleForAction:(long long)arg1 orb:(_Bool)arg2;
+ (id)imageForAction:(long long)arg1 selected:(_Bool)arg2;
+ (_Bool)isActionDestructive:(long long)arg1;

- (double)_minimumFontSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateForMiniBarState:(_Bool)arg1;
- (void)buttonTapped:(id)arg1;
- (void)updateFonts;
- (double)baselineFromBoundsTop;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 centerSingleButton:(_Bool)arg4;
- (void)_setupButtons;
- (double)_defaultFontSizeForButtons;
- (id)_fontWithSize:(double)arg1 selected:(_Bool)arg2;
- (id)_newToolbarButton;
- (void)_setupConstraints;
- (_Bool)_shouldCenterButton;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3;
- (long long)_actionForButton:(id)arg1;
- (long long)_buttonIndexForAction:(long long)arg1;
- (void)_updateButtonFontsWithSize:(double)arg1;
- (id)buttonForAction:(long long)arg1;
- (void)_updateSelectionToButton:(id)arg1;
- (double)_updateFontSizesFromDelegate;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3;

@end
