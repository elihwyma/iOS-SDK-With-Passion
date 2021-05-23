/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIControl.h>

@class MPDownloadProgressView, NSMutableDictionary, UIColor, UIImageView, UILabel, UIView;

@interface MPAddKeepLocalControl : UIControl

{
    UILabel *_controlTitleLabel;
    UIView *_backgroundView;
    UIImageView *_controlImageView;
    NSMutableDictionary *_controlStatusTypeToTitle;
    long long _controlStatusRevision;
    MPDownloadProgressView *_downloadProgressView;
    _Bool _hadFirstTouchHighlight;
    struct UIEdgeInsets _controlImageEdgeInsets;
    UIView *_transientContentView;
    long long _transientContentViewTransactionCount;
    _Bool _traitCollectionDidChangeWasCalled;
    _Bool _allowsAddImage;
    _Bool _scaleImageForAccessibility;
    long long _displayStyle;
    UIColor *_filledTintColor;
    struct MPAddKeepLocalControlStatus _controlStatus;
}

@property (nonatomic) _Bool allowsAddImage;
@property (nonatomic) struct MPAddKeepLocalControlStatus controlStatus;
@property (nonatomic) long long displayStyle;
@property (nonatomic) _Bool scaleImageForAccessibility;
@property (retain, nonatomic) UIColor *filledTintColor;

+ (id)controlTitleFontForControlStatusType:(long long)arg1;
+ (id)_newControlTitleLabel;
+ (id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (struct CGSize)_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(_Bool)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (struct CGSize)maximumSizeWithPreferredHeight:(double)arg1;
- (void)setControlStatus:(struct MPAddKeepLocalControlStatus)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 forControlStatusType:(long long)arg2;
- (id)titleForControlStatusType:(long long)arg1;
- (void)_beginTransientContentViewTransaction;
- (void)_endTransientContentViewTransaction;
- (id)_currentContentSuperview;
- (void)_updateControlTitleLabelVisualProperties;
- (void)_updateBackgroundViewCornerRadius;
- (void)_updateControlStatusProperties;
- (void)_updateControlImageViewAnimation;

@end
