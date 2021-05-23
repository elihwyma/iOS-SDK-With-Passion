/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationLayer : CALayer

{
    _Bool _isObservingAnnotation;
    _Bool _wasLastDrawingClipped;
    _Bool _lastRedrawWasForDrawingBounds;
    _Bool _shouldRecalculateLoupeImage;
    AKAnnotation *_annotation;
    AKPageController *_pageController;
    CALayer *_fastPathLayer;
}

@property (retain) AKAnnotation *annotation;
@property (weak) AKPageController *pageController;
@property (retain, nonatomic) CALayer *fastPathLayer;
@property _Bool isObservingAnnotation;
@property _Bool wasLastDrawingClipped;
@property _Bool lastRedrawWasForDrawingBounds;
@property _Bool shouldRecalculateLoupeImage;

+ (id)newAnnotationLayerForAnnotation:(id)arg1 withPageController:(id)arg2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (void)_stopObservingAnnotation;
- (void)_startObservingAnnotation;
- (void)updateContents;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (void)_updateAnnotationLayerWithLoupeFastPath:(_Bool)arg1;
- (void)_addDebugVisuals;
- (void)_removeDebugVisuals;
- (void)updatePixelAlignment;

@end
