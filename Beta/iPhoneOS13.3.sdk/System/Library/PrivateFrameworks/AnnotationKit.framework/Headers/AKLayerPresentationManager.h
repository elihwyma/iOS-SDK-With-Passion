/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKPageController, AKPageModelController, CALayer, CAShapeLayer, NSMapTable;

@interface AKLayerPresentationManager : NSObject

{
    _Bool _shouldPixelate;
    _Bool _adornmentsHidden;
    _Bool _isObservingModel;
    AKPageController *_pageController;
    CALayer *_rootLayer;
    double _alignmentGuidePositionX;
    double _alignmentGuidePositionY;
    NSMapTable *_annotationsToAnnotationLayers;
    NSMapTable *_annotationsToAdornmentLayers;
    CALayer *_cropAnnotationLayer;
    CALayer *_cropAdornmentLayer;
    CAShapeLayer *_alignmentGuideXLayer;
    CAShapeLayer *_alignmentGuideYLayer;
    AKPageModelController *_pageModelController;
    double _currentScaleFactor;
}

@property (weak) AKPageController *pageController;
@property (retain) CALayer *rootLayer;
@property (retain) NSMapTable *annotationsToAnnotationLayers;
@property (retain) NSMapTable *annotationsToAdornmentLayers;
@property (retain) CALayer *cropAnnotationLayer;
@property (retain) CALayer *cropAdornmentLayer;
@property (retain) CAShapeLayer *alignmentGuideXLayer;
@property (retain) CAShapeLayer *alignmentGuideYLayer;
@property (retain) AKPageModelController *pageModelController;
@property _Bool isObservingModel;
@property double currentScaleFactor;
@property (nonatomic) _Bool shouldPixelate;
@property (nonatomic) _Bool adornmentsHidden;
@property (nonatomic) double alignmentGuidePositionX;
@property (nonatomic) double alignmentGuidePositionY;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardown;
- (void)setup;
- (id)initWithPageController:(id)arg1;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(_Bool)arg2 forceUpdate:(_Bool)arg3;
- (void)forceUpdateAnnotationLayer:(id)arg1;
- (void)_startObservingModel;
- (void)_stopObservingModel;
- (void)_applyUpdatesWithScale:(double)arg1 toLayers:(id)arg2 isLiveUpdate:(_Bool)arg3 forceUpdate:(_Bool)arg4;
- (void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)arg1;
- (void)_removeAdornmentLayerForAnnotation:(id)arg1;
- (void)_removeLayerForAnnotation:(id)arg1;
- (void)_addLayerForAnnotation:(id)arg1;
- (void)_addAdornmentLayerForAnnotation:(id)arg1;
- (void)_updateLoupeAnnotationsContributedToByAnnotation:(id)arg1;
- (double)_hiDPIScaleFactor;
- (void)_setNeedsDisplayOnNewLayer:(id)arg1;

@end
