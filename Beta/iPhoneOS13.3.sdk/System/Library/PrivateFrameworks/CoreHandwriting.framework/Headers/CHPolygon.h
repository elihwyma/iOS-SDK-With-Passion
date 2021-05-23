/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@interface CHPolygon : NSObject

{
    double _area;
    long long _vertexCount;
    struct CGPoint *_vertices;
}

@property (nonatomic) double area;
@property (nonatomic, readonly) long long vertexCount;
@property (nonatomic, readonly) struct CGPoint *vertices;

+ (id)_sutherlandHodgmanClipForSubjectPolygon:(id)arg1 usingClipPolygon:(id)arg2;
+ (struct CGPoint *)_clipForPolygon:(id)arg1 clippingEdge:(struct CHPolygonEdge)arg2 clippedPolygonVertexCount:(long long *)arg3;
+ (struct CGPoint)_intersectionPointWithClippingEdge:(struct CHPolygonEdge)arg1 withPolygonEdge:(struct CHPolygonEdge)arg2;

- (id)description;
- (id)initWithVertices:(struct CGPoint *)arg1 vertexCount:(long long)arg2;
- (id)polygonDrawing;
- (id)polygonByIntersectingWithClipPolygon:(id)arg1;

@end
