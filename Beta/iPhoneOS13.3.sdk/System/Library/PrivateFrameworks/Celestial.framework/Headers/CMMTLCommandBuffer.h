/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMTLCommandQueue, NSDictionary, NSError, NSMutableDictionary, NSMutableString, NSString;

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface CMMTLCommandBuffer : NSObject

{
    NSMutableString *_cmLabel;
    CMMTLCommandQueue *_cmCommandQueue;
    id <MTLCommandBuffer> _commandBuffer;
    _Bool _unretained;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (readonly) id <MTLCommandQueue> commandQueue;
@property (readonly) _Bool retainedReferences;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;
@property (readonly) unsigned long long globalTraceObjectID;

- (void)forwardInvocation:(id)arg1;
- (id)computeCommandEncoder;
- (void)commit;
- (void)waitUntilCompleted;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)waitUntilScheduled;
- (id)initWithCMMTLCommandQueue:(id)arg1 unretained:(_Bool)arg2;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;

@end
