/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController;

@interface AKAdornmentLayer : CALayer

{
    _Bool _isObservingAnnotation;
    _Bool _isObservingEventHandling;
    AKAnnotation *_annotation;
    AKPageController *_pageController;
    double _currentScaleFactor;
    CALayer *_handleContainerLayer;
}

@property (retain) AKAnnotation *annotation;
@property (weak) AKPageController *pageController;
@property _Bool isObservingAnnotation;
@property (retain) CALayer *handleContainerLayer;
@property double currentScaleFactor;
@property _Bool isObservingEventHandling;

+ (Class)_adornmentClassForAnnotation:(id)arg1;
+ (id)newAdornmentLayerForAnnotation:(id)arg1 withPageController:(id)arg2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardown;
- (id)actionForKey:(id)arg1;
- (void)_stopObservingAnnotation;
- (void)_startObservingAnnotation;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)arg1;
- (unsigned long long)currentlyDraggedArea;
- (_Bool)needsUpdateWhenDraggingStartsOrEnds;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (void)updatePixelAlignment;
- (void)_startObservingAnnotationEventHandlers;
- (void)_stopObservingAnnotationEventHandlers;
- (void)_addHandleSublayerAtPoint:(struct CGPoint)arg1 withStyle:(unsigned long long)arg2;

@end
