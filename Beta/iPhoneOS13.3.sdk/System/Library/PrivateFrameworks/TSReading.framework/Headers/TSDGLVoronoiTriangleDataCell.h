/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDGLVoronoiTriangleDataCell : NSObject

{
    unsigned long long _triangleCount;
    unsigned long long _vertexCount;
    CDStruct_6e3f967a *_vertexData;
    CDStruct_6e3f967a _centerPoint;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) CDStruct_6e3f967a *vertexData;
@property (nonatomic, readonly) CDStruct_6e3f967a centerPoint;
@property (nonatomic, readonly) struct CGRect bounds;

- (void)dealloc;
- (id)initWithTrianglePoints:(CDStruct_6e3f967a *)arg1;
- (void)p_setupTriangleDataWithEdges:(vector_5a9f1b73)arg1;
- (id)cellsBySplittingCellIntoTriangles;
- (id)initWithEdges:(vector_5a9f1b73)arg1;

@end
