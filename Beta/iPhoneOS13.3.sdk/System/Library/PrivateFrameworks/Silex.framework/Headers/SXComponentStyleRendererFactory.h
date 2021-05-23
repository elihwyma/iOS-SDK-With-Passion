/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXViewport;

@protocol SXGradientFactory, SXImageFillViewFactory, SXRepeatableImageFillViewFactory, SXVideoFillViewFactory;

@interface SXComponentStyleRendererFactory : NSObject

{
    id <SXImageFillViewFactory> _imageFillViewFactory;
    id <SXVideoFillViewFactory> _videoFillViewFactory;
    id <SXGradientFactory> _gradientFactory;
    id <SXRepeatableImageFillViewFactory> _repeatableImageFillViewFactory;
    SXViewport *_viewport;
}

@property (nonatomic, readonly) id <SXImageFillViewFactory> imageFillViewFactory;
@property (nonatomic, readonly) id <SXVideoFillViewFactory> videoFillViewFactory;
@property (nonatomic, readonly) id <SXGradientFactory> gradientFactory;
@property (nonatomic, readonly) id <SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory;
@property (nonatomic, readonly) SXViewport *viewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)componentStyleRendererForComponentStyle:(id)arg1;
- (id)initWithImageFillViewFactory:(id)arg1 videoFillViewFactory:(id)arg2 gradientFactory:(id)arg3 repeatableImageFillViewFactory:(id)arg4 viewport:(id)arg5;

@end
