/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayRenderer.h>

@class NSArray, NSMutableDictionary, UIColor;

@interface MKOverlayPathRenderer : MKOverlayRenderer

{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    int _lineJoin;
    int _lineCap;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
    _Bool _shouldRasterize;
    struct os_unfair_lock_s _runningVectorGeometryAnimationsLock;
    NSMutableDictionary *_runningVectorGeometryAnimations;
    _Bool _externalSubclassOverridesDrawingMethods;
}

@property (nonatomic, readonly, getter=_externalSubclassOverridesDrawingMethods) _Bool externalSubclassOverridesDrawingMethods;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property double lineWidth;
@property int lineJoin;
@property int lineCap;
@property double miterLimit;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;
@property (nonatomic) _Bool shouldRasterize;
@property const struct CGPath *path;

+ (Class)_mapkitLeafClass;
+ (_Bool)_externalSubclassOverridesDrawingMethods;

- (void)dealloc;
- (id)initWithOverlay:(id)arg1;
- (void)createPath;
- (void)_performInitialConfiguration;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)invalidatePath;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (_Bool)_canProvideVectorGeometry;
- (void)_animateVectorGeometryIfNecessaryForKey:(id)arg1 withStepHandler:(CDUnknownBlockType)arg2;

@end
