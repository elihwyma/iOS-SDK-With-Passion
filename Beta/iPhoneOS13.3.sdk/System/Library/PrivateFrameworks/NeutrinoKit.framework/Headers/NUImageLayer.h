/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NeutrinoKit/NUGLLayer.h>

@class NUGLPipeline, NUGLVertexArray, NUImageGeometry;

@protocol NUTextureImage;

@interface NUImageLayer : NUGLLayer

{
    NUGLPipeline *_pipeline;
    NUGLVertexArray *_vertices;
    _Bool _debugTextureDrawing;
    struct CGColor *_debugColor;
    id <NUTextureImage> __image;
    NUImageGeometry *__geometry;
}

@property (retain) id <NUTextureImage> _image;
@property (retain) NUImageGeometry *_geometry;
@property (retain) id <NUTextureImage> image;
@property (retain) NUImageGeometry *geometry;
@property (retain) struct CGColor *debugColor;

+ (id)vertexLayout;
+ (id)fragmentShaderProgram;
+ (id)vertexShaderProgram;

- (id)init;
- (void)reset:(id)arg1;
- (void)draw:(id)arg1;
- (void)clearBackground:(struct CGColor *)arg1 context:(id)arg2;
- (void)drawImage:(id)arg1 region:(id)arg2 context:(id)arg3;
- (void)drawTexture:(id)arg1 inRect:(CDStruct_0973877e)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;

@end
