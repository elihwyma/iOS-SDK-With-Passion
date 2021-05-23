/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class VKMapView;

@protocol MKRotationFilterDelegate;

__attribute__((visibility("hidden")))
@interface MKRotationFilter : NSObject

{
    VKMapView *_mapLayer;
    double _gestureStartAngle;
    _Bool _userRotatedAwayFromVerticalYaw;
    double _previousVerticalYawOverride;
    _Bool _snappedToNorth;
    _Bool _snappedAtStart;
    _Bool _snappingEnabled;
    double _additionalSnappingAngle;
    id <MKRotationFilterDelegate> _delegate;
}

@property (nonatomic, getter=isSnappedToNorth) _Bool snappedToNorth;
@property (nonatomic) double additionalSnappingAngle;
@property (weak, nonatomic) id <MKRotationFilterDelegate> delegate;

- (id)init;
- (id)initWithMapLayer:(id)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1 withSnapping:(_Bool)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)updateSnappedToNorth;
- (_Bool)hasAdditionalSnappingAngle;
- (void)snapToNorthAnimated:(_Bool)arg1 forceTrueNorth:(_Bool)arg2;

@end
