/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, MKMapView, NSMeasurementFormatter;

@protocol HULocationTriggerEditorMapDragRadiusViewDelegate, MKAnnotation, MKOverlay;

@interface HULocationTriggerEditorMapDragRadiusView : UIView

{
    _Bool _isDragging;
    _Bool _isMinimum;
    _Bool _isMaximum;
    id <HULocationTriggerEditorMapDragRadiusViewDelegate> _delegate;
    unsigned long long _proximity;
    MKMapView *_mapView;
    UIView *_handleEndpointView;
    id <MKAnnotation> _annotation;
    id <MKOverlay> _overlay;
    CAShapeLayer *_shapeLayer;
    NSMeasurementFormatter *_measurmentFormatter;
}

@property (retain, nonatomic) UIView *handleEndpointView;
@property (retain, nonatomic) id <MKAnnotation> annotation;
@property (retain, nonatomic) id <MKOverlay> overlay;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) _Bool isMinimum;
@property (nonatomic) _Bool isMaximum;
@property (retain, nonatomic) NSMeasurementFormatter *measurmentFormatter;
@property (retain, nonatomic) MKMapView *mapView;
@property (nonatomic) _Bool isDragging;
@property (weak, nonatomic) id <HULocationTriggerEditorMapDragRadiusViewDelegate> delegate;
@property (nonatomic) unsigned long long proximity;

- (struct CGPoint)center;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)maxPoint;
- (void)removeHandle:(_Bool)arg1;
- (void)addHandleForAnnotation:(id)arg1 withOverlay:(id)arg2;
- (struct CGPoint)minPoint;
- (id)bezierPathWithEndPoint:(struct CGPoint)arg1;
- (id)shapeLayerWithEndPoint:(struct CGPoint)arg1;
- (void)popAnimateHandle;
- (void)animateHandleIn:(_Bool)arg1;
- (double)currentHandleDistanceNormalized;
- (double)minimumRadiusNormalized;
- (double)maximumRadiusNormalized;
- (_Bool)usesMetric;
- (double)minimumInMeters;
- (double)currentHandleDistance;
- (void)resizeCircleAfterDelay;
- (double)feetToMeters:(double)arg1;

@end
