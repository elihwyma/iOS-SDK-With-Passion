/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPView.h>

@class NSLayoutConstraint, NSString, TPBadgeView, UILabel, UIStackView, UITapGestureRecognizer;

@protocol TPPillViewDelegate;

@interface TPPillView : TPView

{
    id <TPPillViewDelegate> _delegate;
    unsigned long long _theme;
    TPBadgeView *_badgeView;
    UIStackView *_stackView;
    UILabel *_textLabel;
    UITapGestureRecognizer *_gestureRecognizer;
    NSLayoutConstraint *_stackViewBottomAnchorLayoutConstraint;
    NSLayoutConstraint *_stackViewLeftAnchorLayoutConstraint;
    NSLayoutConstraint *_stackViewRightAnchorLayoutConstraint;
    NSLayoutConstraint *_stackViewTopAnchorLayoutConstraint;
}

@property (nonatomic, readonly) TPBadgeView *badgeView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UITapGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeftAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewRightAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopAnchorLayoutConstraint;
@property (weak, nonatomic) id <TPPillViewDelegate> delegate;
@property (copy, nonatomic) NSString *badgeText;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long theme;

- (void)commonInit;
- (void)handleTap:(id)arg1;
- (void)updateFonts;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect)arg2 theme:(unsigned long long)arg3;
- (void)updateTheme;
- (void)loadConstraints;
- (void)unloadConstraints;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect)arg2;

@end
