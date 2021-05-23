/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;

@interface ARSCNPlaneGeometry : SCNGeometry

{
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _textureCoordinateBuffer;
}

+ (id)planeGeometryWithDevice:(id)arg1;

- (void)updateFromPlaneGeometry:(id)arg1;

@end
