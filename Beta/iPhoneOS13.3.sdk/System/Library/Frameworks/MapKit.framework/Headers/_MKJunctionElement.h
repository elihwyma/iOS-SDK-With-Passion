/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKJunctionElement : NSObject

{
    struct CGPoint _leftBasePoint;
    struct CGPoint _rightBasePoint;
    double _angle;
}

@property (nonatomic) struct CGPoint leftBasePoint;
@property (nonatomic) struct CGPoint rightBasePoint;
@property (nonatomic) double angle;

- (struct CGPoint)leftEdgePointAtDistanceFromBase:(double)arg1;
- (struct CGPoint)rightEdgePointAtDistanceFromBase:(double)arg1;

@end
