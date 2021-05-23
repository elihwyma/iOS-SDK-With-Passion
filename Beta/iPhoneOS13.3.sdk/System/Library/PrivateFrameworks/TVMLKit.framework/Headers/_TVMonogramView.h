/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/_UIFloatingContentView.h>

@class NSString, TVImageProxy, TVMonogramViewConfiguration, UIImage, UIView, _TVImageView, _TVMonogramDescription;

@interface _TVMonogramView : _UIFloatingContentView

{
    UIView *_placeholderView;
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    _Bool _isSelected;
    TVMonogramViewConfiguration *_configuration;
    _TVMonogramDescription *_monogramDescription;
    UIImage *_image;
    UIImage *_placeholderImage;
    double _unfocusedImageAlpha;
    UIView *_overlayView;
    CDUnknownBlockType _pressCompletionBlock;
    _TVImageView *_imageView;
    TVImageProxy *_imageProxy;
}

@property (copy, nonatomic) CDUnknownBlockType pressCompletionBlock;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (nonatomic, readonly) TVMonogramViewConfiguration *configuration;
@property (retain, nonatomic) _TVMonogramDescription *monogramDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double unfocusedImageAlpha;
@property (retain, nonatomic) UIView *overlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)_updatePlaceholerView;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect)arg1;
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect)arg1;

@end
