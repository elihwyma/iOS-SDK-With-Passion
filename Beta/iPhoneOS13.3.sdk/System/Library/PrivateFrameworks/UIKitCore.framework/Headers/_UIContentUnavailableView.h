/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, _UIBackdropView;

@interface _UIContentUnavailableView : UIView

{
    unsigned long long _style;
    NSString *_title;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    NSLayoutConstraint *buttonHeightConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize _fromSnapshotSize;
    NSMutableArray *_containerViewContraints;
    NSString *_message;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonAction;
    unsigned long long _vibrantOptions;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) CDUnknownBlockType buttonAction;
@property (nonatomic) unsigned long long vibrantOptions;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusedView;
- (void)layoutSubviews;
- (id)_titleLabel;
- (void)updateConstraints;
- (id)_titleFont;
- (void)didMoveToWindow;
- (id)_messageLabel;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;
- (struct CGSize)_buttonSize;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(_Bool)arg4;
- (double)_labelVerticalSpacing;
- (void)_updateForCurrentContentSizeCategory;
- (id)_messageTextStyle;
- (id)_buttonFont;
- (void)_rebuildConstraints;
- (_Bool)_hasVibrantButton;
- (struct CGColor *)_colorForButtonForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;
- (void)_updateViewHierarchy;
- (double)_buttonVerticalSpacing;
- (_Bool)_hasVibrantText;
- (id)_vibrantBaseColor;
- (id)_flatTextColor;
- (double)_labelAlpha;
- (void)_actionButtonPressed:(id)arg1;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;
- (double)_buttonAlpha;
- (void)windowWillRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowDidRotateNotification:(id)arg1;
- (void)cleanupLingeringRotationState;
- (id)_buttonTextStyle;
- (id)_actionButton;

@end
