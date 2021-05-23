/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CAShapeLayer.h>

@class NSString, _MKPuckAnnotationView;

__attribute__((visibility("hidden")))
@interface MKUserLocationHeadingArrowLayer : CAShapeLayer

{
    double _baseRadius;
    double _tipRadius;
    double _baseHalfAngle;
    double _maxUncertaintyAngleToShowArrow;
    _MKPuckAnnotationView *_userLocationView;
    double _headingRadians;
}

@property (weak, nonatomic, readonly) _MKPuckAnnotationView *userLocationView;
@property (nonatomic) double headingRadians;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateTintColor:(id)arg1;
- (void)animateToSetVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateHeading:(double)arg1;
- (id)initWithUserLocationView:(id)arg1;
- (struct CGPoint)_positionWhenVisible:(_Bool)arg1;
- (struct CGPath *)_pathWhenVisible:(_Bool)arg1;
- (_Bool)_shouldBeVisibleForAccuracy:(double)arg1;
- (id)_animationToSetVisible:(_Bool)arg1;
- (double)_baseRadiusWhenVisible:(_Bool)arg1;
- (double)_tipRadiusWhenVisible:(_Bool)arg1;
- (id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3;

@end
