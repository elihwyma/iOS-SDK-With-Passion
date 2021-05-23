/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;

@interface ARSCNFaceGeometry : SCNGeometry

{
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _normalBuffer;
    id <MTLBuffer> _textureBuffer;
}

@property (retain, nonatomic) id <MTLBuffer> vertexBuffer;
@property (retain, nonatomic) id <MTLBuffer> normalBuffer;
@property (retain, nonatomic) id <MTLBuffer> textureBuffer;

+ (id)faceGeometryWithDevice:(id)arg1 eyesFilled:(_Bool)arg2 mouthFilled:(_Bool)arg3;
+ (id)faceGeometryWithDevice:(id)arg1;
+ (id)faceGeometryWithDevice:(id)arg1 fillMesh:(_Bool)arg2;

- (void)updateFromFaceGeometry:(id)arg1;

@end
