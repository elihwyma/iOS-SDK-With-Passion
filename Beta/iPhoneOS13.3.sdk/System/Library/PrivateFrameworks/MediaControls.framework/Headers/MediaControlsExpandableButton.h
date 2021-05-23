/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIControl.h>

@class MTVisualStylingProvider, MediaControlsExpandableButtonOption, NSArray, NSMutableArray, NSString, NSTimer, UILabel, UIView;

@interface MediaControlsExpandableButton : UIControl

{
    _Bool _expanded;
    _Bool _toggleEnabled;
    _Bool _displayMessage;
    _Bool _resetTracking;
    NSArray *_options;
    long long _selectedOptionIndex;
    NSString *_title;
    long long _axis;
    NSMutableArray *_buttons;
    UIView *_backgroundView;
    UIView *_overlaySelectionView;
    UIView *_selectionView;
    UIView *_clippingView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_messageLabel;
    NSTimer *_messageTimer;
    MTVisualStylingProvider *_visualStylingProvider;
    struct CGSize _maximumExpandedSize;
}

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *overlaySelectionView;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSTimer *messageTimer;
@property (nonatomic) _Bool toggleEnabled;
@property (nonatomic) _Bool displayMessage;
@property (nonatomic) _Bool resetTracking;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) NSArray *options;
@property (nonatomic, readonly) MediaControlsExpandableButtonOption *selectedOption;
@property (nonatomic) long long selectedOptionIndex;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic) struct CGSize maximumExpandedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_layoutLabels;
- (void)_contentSizeCategoryDidChange;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)didTapButton:(id)arg1;
- (id)initForControlCenter;
- (void)_springAnimate:(CDUnknownBlockType)arg1;
- (void)showMessage:(id)arg1;
- (void)_layoutSelectionView;
- (void)_updateLabelVisualStyling;
- (long long)_buttonLayoutAxis;
- (void)_updateButtonsVisiblity;
- (void)_updateSelectionVisiblity;
- (void)_animateSelectedGlyphState;
- (void)_resetSelectionView;

@end
