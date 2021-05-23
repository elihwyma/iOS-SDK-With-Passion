/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIPanGestureRecognizer.h>

@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer

{
    double _zoomDraggingResistance;
    double _translation;
    double _scale;
    double _velocity;
    double _previousVelocity;
    _Bool _didStartUpdate;
    double _lastUpdateTimestamp;
}

@property (nonatomic) double zoomDraggingResistance;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double velocity;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_updateScaleAndVelocityIfNeeded:(long long)arg1;

@end
