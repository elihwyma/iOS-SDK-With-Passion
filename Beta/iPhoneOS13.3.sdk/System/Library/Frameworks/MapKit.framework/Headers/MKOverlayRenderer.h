/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapView;

@protocol MKOverlay, OS_dispatch_queue;

@interface MKOverlayRenderer : NSObject

{
    id <MKOverlay> _overlay;
    CDStruct_02837cd9 _boundingMapRect;
    id _renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
    double _contentScaleFactor;
    double _alpha;
}

@property (nonatomic, readonly) id <MKOverlay> overlay;
@property double alpha;
@property (readonly) double contentScaleFactor;

- (id)init;
- (void)dealloc;
- (void)setContentScaleFactor:(double)arg1;
- (void)setNeedsDisplay;
- (id)_mapView;
- (id)_renderer;
- (void)_setMapView:(id)arg1;
- (id)initWithOverlay:(id)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (void)_updateRenderColors;
- (void)set_boundingMapRect:(CDStruct_02837cd9)arg1;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (void)set_renderer:(id)arg1;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (CDStruct_02837cd9)mapRectForRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)_originMapPoint;
- (CDStruct_02837cd9)_boundingMapRect;
- (_Bool)_mayExtendOutsideBounds;
- (void)_forEachMapRectForKey:(const CDStruct_7523a67d *)arg1 withContext:(struct CGContext *)arg2 performBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)rectForMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (void)setNeedsDisplayInMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (_Bool)overlay:(id)arg1 canPossiblyDrawKey:(const CDStruct_7523a67d *)arg2;
- (_Bool)overlay:(id)arg1 canDrawKey:(const CDStruct_7523a67d *)arg2;
- (void)overlay:(id)arg1 drawKey:(const CDStruct_7523a67d *)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)overlayCanProvideVectorData:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;

@end
