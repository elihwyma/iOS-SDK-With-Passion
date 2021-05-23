/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIControl.h>

@class IKViewElement, UILargeContentViewerInteraction, UIView, VUIButtonLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIButton : UIControl

{
    _Bool _imageTrailsTextContent;
    VUIButtonLayout *_layout;
    _TVImageView *_backgroundImageView;
    VUILabel *_textContentView;
    _TVImageView *_imageView;
    IKViewElement *_viewElement;
    CDUnknownBlockType _selectActionHandler;
    UIView *_backdropView;
    UILargeContentViewerInteraction *_largeContentViewerInteraction;
    _TVImageView *_imagesViewDefaultState;
    _TVImageView *_imagesViewHighlightedState;
    _TVImageView *_backgroundImagesViewDefaultState;
    _TVImageView *_backgroundImagesViewHighlightedState;
}

@property (retain, nonatomic) VUIButtonLayout *layout;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) UILargeContentViewerInteraction *largeContentViewerInteraction;
@property (retain, nonatomic) _TVImageView *imagesViewDefaultState;
@property (retain, nonatomic) _TVImageView *imagesViewHighlightedState;
@property (retain, nonatomic) _TVImageView *backgroundImagesViewDefaultState;
@property (retain, nonatomic) _TVImageView *backgroundImagesViewHighlightedState;
@property (retain, nonatomic) _TVImageView *backgroundImageView;
@property (nonatomic) _Bool imageTrailsTextContent;
@property (copy, nonatomic) VUILabel *textContentView;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (copy, nonatomic) CDUnknownBlockType selectActionHandler;

- (void)prepareForReuse;
- (struct CGSize)intrinsicContentSize;
- (void)setCornerRadius:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)largeContentTitle;
- (id)largeContentImage;
- (_Bool)scalesLargeContentImage;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)_hasTitle;
- (void)_updateBackgroundColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateLayout;
- (_Bool)_hasImage;
- (void)_buttonTapped:(id)arg1;
- (_Bool)_hasBackgroundImage;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)updateWithElement:(id)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;
- (void)setImageView:(id)arg1 state:(unsigned long long)arg2;
- (void)_configureWithLayout:(id)arg1;
- (void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2;
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;
- (struct CGPoint)_centerWithViewSize:(struct CGSize)arg1 withParentSize:(struct CGSize)arg2;

@end
