/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentView, SXGradientFillView, SXImageFillView, SXLayer, SXRepeatableImageFillView, SXShapeLayer, SXVideoFillView, SXViewport;

@protocol SXComponentStyle, SXGradientFactory, SXImageFillViewFactory, SXRepeatableImageFillViewFactory, SXVideoFillViewFactory;

@interface SXComponentStyleRenderer : NSObject

{
    _Bool _didRegisterForDynamicBounds;
    id <SXComponentStyle> _componentStyle;
    SXViewport *_viewport;
    id <SXVideoFillViewFactory> _videoFillViewFactory;
    id <SXImageFillViewFactory> _imageFillViewFactory;
    id <SXGradientFactory> _gradientFactory;
    id <SXRepeatableImageFillViewFactory> _repeatableImageFillViewFactory;
    SXComponentView *_componentView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
    SXRepeatableImageFillView *_repeatableImageFillView;
    SXLayer *_shadowLayer;
    SXShapeLayer *_borderLayer;
    SXShapeLayer *_topBorderLayer;
    SXShapeLayer *_rightBorderLayer;
    SXShapeLayer *_bottomBorderLayer;
    SXShapeLayer *_leftBorderLayer;
}

@property (nonatomic, readonly) id <SXComponentStyle> componentStyle;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) id <SXVideoFillViewFactory> videoFillViewFactory;
@property (nonatomic, readonly) id <SXImageFillViewFactory> imageFillViewFactory;
@property (nonatomic, readonly) id <SXGradientFactory> gradientFactory;
@property (nonatomic, readonly) id <SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory;
@property (weak, nonatomic, readonly) SXComponentView *componentView;
@property (retain, nonatomic) SXGradientFillView *gradientFillView;
@property (retain, nonatomic) SXImageFillView *imageFillView;
@property (retain, nonatomic) SXVideoFillView *videoFillView;
@property (retain, nonatomic) SXRepeatableImageFillView *repeatableImageFillView;
@property (nonatomic) _Bool didRegisterForDynamicBounds;
@property (retain, nonatomic) SXLayer *shadowLayer;
@property (retain, nonatomic) SXShapeLayer *borderLayer;
@property (retain, nonatomic) SXShapeLayer *topBorderLayer;
@property (retain, nonatomic) SXShapeLayer *rightBorderLayer;
@property (retain, nonatomic) SXShapeLayer *bottomBorderLayer;
@property (retain, nonatomic) SXShapeLayer *leftBorderLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)prepareForComponentView:(id)arg1;
- (void)applyComponentStyle;
- (id)initWithComponentStyle:(id)arg1 viewport:(id)arg2 imageFillViewFactory:(id)arg3 videoFillViewFactory:(id)arg4 gradientViewFactory:(id)arg5 repeatableImageFillViewFactory:(id)arg6;
- (void)applyCornerRadius:(double)arg1 cornerMask:(unsigned long long)arg2 curve:(id)arg3 onView:(id)arg4;
- (void)prepareShadow:(id)arg1;
- (void)prepareFill:(id)arg1;
- (void)prepareBorder:(id)arg1;
- (void)applyMask:(id)arg1;
- (void)applyBorder:(id)arg1;
- (void)applyBackgroundColor:(id)arg1;
- (void)applyOpacity:(double)arg1;
- (void)applyFill:(id)arg1;
- (void)applyShadow:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)applyStrokeStyle:(id)arg1 borderLayer:(id)arg2 path:(id)arg3 lineWidth:(double)arg4;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)repeatableImageFillViewForFill:(id)arg1;

@end
