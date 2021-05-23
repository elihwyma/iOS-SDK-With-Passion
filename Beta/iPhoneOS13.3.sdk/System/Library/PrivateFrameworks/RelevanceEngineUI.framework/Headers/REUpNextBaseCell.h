/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSString, REContent, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIView;

@protocol REUpNextCellDelegate;

@interface REUpNextBaseCell : UICollectionViewCell

{
    struct CGSize _shadowSize;
    UIImageView *_shadowView;
    CALayer *_imageLayer;
    UIView *_overlayView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _darkeningAmount;
    double _contentBrightness;
    REContent *_content;
    unsigned long long _behavior;
    struct UIEdgeInsets _overlayInsets;
    _Bool _shouldOverrideContentHeaderColor;
    UIImage *_contentImage;
    id <REUpNextCellDelegate> _delegate;
    UIImage *_overrideContentImage;
    NSString *_representedElementIdentifier;
    UIColor *_defaultTextColor;
}

@property (nonatomic, readonly) UIImage *contentImage;
@property (weak, nonatomic) id <REUpNextCellDelegate> delegate;
@property (retain, nonatomic) UIImage *overrideContentImage;
@property (nonatomic, readonly) REContent *content;
@property (retain, nonatomic) NSString *representedElementIdentifier;
@property (nonatomic, readonly) UIColor *defaultTextColor;
@property (nonatomic, readonly) _Bool shouldOverrideContentHeaderColor;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)_shadowImage;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)transitionContext;
- (void)applyLayoutAttributes:(id)arg1;
- (void)didLongPress:(id)arg1;
- (void)setHighlightInsets:(struct UIEdgeInsets)arg1;
- (void)defaultTextColorDidChange;
- (void)configureWithContent:(id)arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;
- (void)setContentImage:(id)arg1 animated:(_Bool)arg2;
- (void)_updateColorOverlay;
- (void)setContentBrightness:(double)arg1 animated:(_Bool)arg2;
- (void)setHighlightBehavior:(unsigned long long)arg1;
- (void)setShadowViewHidden:(_Bool)arg1;
- (void)setForegroundTextColorToColor:(id)arg1 shouldOverrideContentHeaderColor:(_Bool)arg2;

@end
