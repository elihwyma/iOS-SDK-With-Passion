/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPresentationDescriptor, ARPresentationDisplay, NSArray, NSCondition, NSMutableArray;

@protocol MTLCommandQueue, MTLSharedEvent, MTLTexture;

@interface ARPresentationFramePool : NSObject

{
    id <MTLCommandQueue> _commandQueue;
    ARPresentationDescriptor *_descriptor;
    ARPresentationDisplay *_display;
    NSMutableArray *_framePool;
    unsigned long long _frameStackCount;
    unsigned long long _framePoolCount;
    unsigned long long _framePoolIndex;
    unsigned long long _frameNumberIndex;
    _Bool _areFramesValid;
    id <MTLSharedEvent> _compositorEvent;
    id <MTLSharedEvent> _applicationEvent;
    NSArray *_eyes;
    int _eyeCount;
    struct CGSize _textureSize;
    id <MTLTexture> _msaaColor;
    id <MTLTexture> _msaaDepth;
    NSMutableArray *_frameStack;
    struct os_unfair_lock_s _lock;
    NSCondition *_condition;
    NSMutableArray *_forwardFlow;
}

@property (retain, nonatomic) NSMutableArray *forwardFlow;
@property (copy, nonatomic) ARPresentationDescriptor *descriptor;
@property (copy, nonatomic) ARPresentationDisplay *display;

- (void)_invalidateFrames;
- (CDStruct_4b2885c7)_snapViewport:(CDStruct_4b2885c7)arg1;
- (void)_addPresentationFrame;
- (void)_lock_updateMSAATextures:(id)arg1;
- (void)_lock_updateForwardFlowBuffer:(id)arg1;
- (void)_updateViewports;
- (id)mainRenderPassDescriptor:(id)arg1 zfar:(double)arg2;
- (_Bool)_hasPresentationFrameToRender;
- (id)_findPresentationFrame:(unsigned long long)arg1;
- (void)_signalPresentationFrameToRender;
- (void)_updateRenderPassDescriptor:(id)arg1;
- (id)_createTexture:(unsigned long long)arg1 textureSize:(struct CGSize)arg2 name:(id)arg3;
- (_Bool)_lock_hasPresentationFrameToRender;
- (void)_deleteMSAATextures;
- (void)_lock_deleteForwardFlowBuffer;
- (id)_createMultisampleTexture:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize)arg3;
- (id)initWithCommandQueue:(id)arg1 compositorEvent:(id)arg2 applicationEvent:(id)arg3;
- (void)allocateTextures;
- (id)makePresentationFrame:(id)arg1 frameNumber:(unsigned long long)arg2;
- (void)waitForPresentationFrameToRenderUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateWarpPose:(id)arg1 scanoutStart:(id)arg2 scanoutEnd:(id)arg3;
- (id)findPresentationFrame:(unsigned long long)arg1;
- (void)skipComposite:(unsigned long long)arg1;
- (id)findPresentationFrameToComposite:(unsigned long long)arg1;
- (id)findPresentationFrameToPresent;
- (id)lastFrameRendered;

@end
