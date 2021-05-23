/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEORouteMatch;

__attribute__((visibility("hidden")))
@interface VKPuckAnimatorLocationProjector : NSObject

{
    GEORouteMatch *_routeMatch;
    GEORouteMatch *_projectedRouteMatch;
    Matrix_6e1d3589 _projectedPosition;
    double _projectedCourse;
}

@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEORouteMatch *projectedRouteMatch;
@property (nonatomic, readonly) Matrix_6e1d3589 projectedPosition;
@property (nonatomic, readonly) CDStruct_c3b9c2ee projectedLocation;
@property (nonatomic, readonly) double projectedCourse;
@property (nonatomic, readonly) _Bool projectedLocationOnRoute;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (id)detailedDescription;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3;
- (void)_updateCourseAndPositionFromRouteMatch;

@end
