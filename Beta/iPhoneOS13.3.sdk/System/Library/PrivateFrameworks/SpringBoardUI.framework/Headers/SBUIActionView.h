/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class MTVisualStylingProvider, NSArray, SBUIAction, SBUIActionViewLabel, UIImageView;

@interface SBUIActionView : UIView

{
    _Bool _interfaceOrientationIsPortrait;
    UIImageView *_imageView;
    UIView *_textContainer;
    SBUIActionViewLabel *_titleLabel;
    SBUIActionViewLabel *_subtitleLabel;
    UIView *_highlightView;
    NSArray *_imageViewLayoutConstraints;
    MTVisualStylingProvider *_visualStylingProviderStroke;
    MTVisualStylingProvider *_visualStylingProviderFill;
    _Bool _highlighted;
    SBUIAction *_action;
    long long _imagePosition;
}

@property (nonatomic, readonly) SBUIAction *action;
@property (nonatomic) long long imagePosition;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) double leadingContentMargin;
@property (nonatomic, readonly) double trailingContentMargin;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithAction:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)_setupSubviews;
- (void)setHighlighted:(_Bool)arg1 withFeedbackRetargetBehavior:(id)arg2;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (void)_updateImageViewLayoutConstraints;

@end
