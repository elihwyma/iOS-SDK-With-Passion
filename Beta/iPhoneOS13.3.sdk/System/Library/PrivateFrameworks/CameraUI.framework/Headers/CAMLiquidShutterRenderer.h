/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMetalLayer;

@protocol MTLCommandQueue, MTLDevice, MTLRenderPipelineState;

@interface CAMLiquidShutterRenderer : NSObject

{
    _Bool _showDragHandle;
    _Bool _needsRender;
    _Bool __backgrounded;
    double _blurRadius;
    CAMetalLayer *_metalLayer;
    id <MTLDevice> __device;
    id <MTLCommandQueue> __commandQueue;
    id <MTLRenderPipelineState> __renderPipelineState;
    CDStruct_361c14a1 _centerShape;
    CDStruct_361c14a1 _dragHandleShape;
}

@property (nonatomic, readonly) id <MTLDevice> _device;
@property (nonatomic, readonly) id <MTLCommandQueue> _commandQueue;
@property (nonatomic, readonly) id <MTLRenderPipelineState> _renderPipelineState;
@property (nonatomic, setter=_setBackgrounded:) _Bool _backgrounded;
@property (nonatomic) CDStruct_361c14a1 centerShape;
@property (nonatomic) CDStruct_361c14a1 dragHandleShape;
@property (nonatomic) _Bool showDragHandle;
@property (nonatomic) double blurRadius;
@property (nonatomic) _Bool needsRender;
@property (weak, nonatomic) CAMetalLayer *metalLayer;

- (void)dealloc;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 pixelFormat:(unsigned long long)arg3;
- (void)renderIfNecessary;
- (CDStruct_869f9c67)_fragmentForShape:(CDStruct_361c14a1)arg1 scale:(double)arg2;
- (CDStruct_f1db2b5e)_orthographicMatrixWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6;

@end
