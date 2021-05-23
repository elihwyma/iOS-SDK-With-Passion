/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/Swift-Protocol.h>

@class MTLToolsCommandBuffer, NSString;

@protocol MTLDevice;

@interface MTLToolsCommandEncoder : MTLToolsObject <Swift>

{
    MTLToolsCommandBuffer *_commandBuffer;
}

@property (nonatomic, readonly) MTLToolsCommandBuffer *commandBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (void)endEncoding;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)insertDebugSignpost:(id)arg1;
- (unsigned long long)globalTraceObjectID;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)addRetainedObject:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy *)arg3;

@end
