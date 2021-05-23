/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationPlatterView : UIView

{
    _Bool _dropShadowEnabled;
    UIView *_contentView;
    _UIPreviewPresentationEffectView *_contentEffectView;
    _UIPreviewPresentationEffectView *_contentClipView;
    UIView *_contentTransformView;
    UIView *_contentShadowView;
    struct CGSize _contentSize;
    struct CGSize _contentClippingSize;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *contentEffectView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *contentClipView;
@property (retain, nonatomic) UIView *contentTransformView;
@property (retain, nonatomic) UIView *contentShadowView;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) struct CGSize contentClippingSize;
@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isDropShadowEnabled) _Bool dropShadowEnabled;

- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;

@end
