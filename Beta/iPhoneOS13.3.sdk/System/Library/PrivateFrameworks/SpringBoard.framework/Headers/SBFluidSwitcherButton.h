/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UIView;

@interface SBFluidSwitcherButton : UIControl

{
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    UIImage *_image;
    NSString *_backdropGroupName;
    long long _buttonStyle;
    struct UIEdgeInsets _extendedEdgeInsets;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets extendedEdgeInsets;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long buttonStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (id)_backgroundMaterialView;
- (void)_addHighlightViewIfNecessary;
- (void)_invalidateBackgroundView;
- (void)_invalidateXPlusDView;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1;

@end
