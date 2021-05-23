/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKFootprint : NSObject

{
    Box_3d7e3c2c _boundingRect;
    struct VKFootprintConvexHull_struct _convexHull;
    double _maxDistance;
    Matrix_6e1d3589 _furthestGroundPoint;
    double _minDistance;
    Matrix_6e1d3589 _nearestGroundPoint;
    double _minDepth;
    double _maxDepth;
    double _centerDepth;
    int _cornerGroundPointsCount;
    Matrix_6e1d3589 _cornerGroundPoints[12];
}

@property (nonatomic, readonly) Box_3d7e3c2c boundingRect;
@property (nonatomic, readonly) struct VKFootprintConvexHull_struct convexHull;
@property (nonatomic, readonly) double minDepth;
@property (nonatomic, readonly) double maxDepth;
@property (nonatomic, readonly) double centerDepth;
@property (nonatomic, readonly) Matrix_6e1d3589 furthestGroundPoint;
@property (nonatomic, readonly) Matrix_6e1d3589 nearestGroundPoint;
@property (nonatomic, readonly) Matrix_6e1d3589 *cornerGroundPoints;
@property (nonatomic, readonly) int cornerGroundPointsCount;

- (id).cxx_construct;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationCoordinateTest;
- (void)computeFromCamera:(id)arg1;
- (Box_3d7e3c2c)_expandedBoundingRect;
- (_Bool)rejectsRect:(const Box_3d7e3c2c *)arg1;
- (_Bool)containsGroundPoint:(const Matrix_6e1d3589 *)arg1;

@end
