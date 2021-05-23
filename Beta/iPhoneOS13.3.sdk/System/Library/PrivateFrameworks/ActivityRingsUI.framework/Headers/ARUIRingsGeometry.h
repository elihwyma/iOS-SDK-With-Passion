/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsGeometry : NSObject

{
    unsigned int _circleSegments;
    float _startingRadian;
    float _endingRadian;
}

@property (nonatomic) unsigned int circleSegments;
@property (nonatomic) float startingRadian;
@property (nonatomic) float endingRadian;

- (id)init;
- (unsigned int)vertexCount;
- (unsigned int)indexCount;
- (void)enumerateVertexGeometryWithBlock:(CDUnknownBlockType)arg1;
- (unsigned short *)connectedIndiciesGeometry;
- (unsigned int)disconnectedIndexCount;
- (unsigned short *)disconnectedIndiciesGeometry;

@end
