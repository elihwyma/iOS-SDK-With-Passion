/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKLocationReadings, MKMapSnapshotter, UIColor;

@interface HKRouteMapGenerator : NSObject

{
    _Bool _useRelativeColorForSpeed;
    _Bool _useMarkerAnnotations;
    HKLocationReadings *_locationReadings;
    UIColor *_startPointColor;
    UIColor *_endPointColor;
    MKMapSnapshotter *_runningSnapshotter;
}

@property (retain, nonatomic) MKMapSnapshotter *runningSnapshotter;
@property (retain, nonatomic) HKLocationReadings *locationReadings;
@property (nonatomic) _Bool useRelativeColorForSpeed;
@property (nonatomic) _Bool useMarkerAnnotations;
@property (retain, nonatomic) UIColor *startPointColor;
@property (retain, nonatomic) UIColor *endPointColor;

- (id)init;
- (void)snapshotWithSize:(struct CGSize)arg1 lineWidth:(double)arg2 traitCollection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_drawLineFromPointA:(struct CGPoint)arg1 toPointB:(struct CGPoint)arg2 atSpeed:(double)arg3 context:(struct CGContext *)arg4 drawDashes:(_Bool)arg5 lineWidth:(double)arg6;
- (id)relativeColorForSpeed:(double)arg1;
- (CDStruct_90e2a262)_adjustedMapRectForPolyline:(id)arg1 withSize:(struct CGSize)arg2;
- (id)_imageWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(CDStruct_90e2a262)arg3 onSnapshot:(id)arg4;
- (id)_annotationViewWithIsStartPoint:(_Bool)arg1;
- (void)_overlayAnnotationView:(id)arg1 point:(CDStruct_c3b9c2ee)arg2 onSnapshot:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(CDStruct_90e2a262)arg3 context:(struct CGContext *)arg4 pointFromMapPoint:(CDUnknownBlockType)arg5;

@end
