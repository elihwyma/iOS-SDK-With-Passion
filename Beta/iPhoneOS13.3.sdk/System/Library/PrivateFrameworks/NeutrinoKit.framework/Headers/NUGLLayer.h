/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <CALayer.h>

@class NUColorSpace, NUGLContext, NUPixelFormat;

@protocol NUSurfaceStorage;

@interface NUGLLayer : CALayer

{
    NUGLContext *_context;
    id <NUSurfaceStorage> _drawingStorage;
    id <NUSurfaceStorage> _displayStorage;
    NUPixelFormat *_pixelFormat;
    NUColorSpace *_colorSpace;
}

@property (nonatomic, readonly) NUPixelFormat *pixelFormat;
@property (nonatomic, readonly) NUColorSpace *colorSpace;

- (id)init;
- (void)dealloc;
- (void)reset:(id)arg1;
- (void)display;
- (_Bool)contentsAreFlipped;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)draw:(id)arg1;
- (void)_updateDisplay:(id)arg1;
- (void)_resetContents;
- (void)_ensureDrawingStorageOfSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)_drawInTexture:(id)arg1 context:(id)arg2;
- (void)_updateDisplayWithIdentifier:(id)arg1;

@end
