/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface SCNPassContext : NSObject

{
    struct {
        struct __C3DFXPass *_field1;
        struct __C3DFXTechnique *_field2;
        void *_field3;
        struct __C3DEngineContext *_field4;
        struct __C3DFXProgramObject *_field5;
        double _field6;
        void *_field7;
        struct __C3DRendererElement *_field8;
        long long _field9;
    } *_context;
}

@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) id <MTLCommandBuffer> commandBuffer;
@property (nonatomic, readonly) id <MTLDevice> device;

- (id)inputTextureWithName:(id)arg1;
- (id)outputTextureWithName:(id)arg1;

@end
