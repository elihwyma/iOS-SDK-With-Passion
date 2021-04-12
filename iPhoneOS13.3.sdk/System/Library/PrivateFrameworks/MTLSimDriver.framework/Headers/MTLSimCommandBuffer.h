//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLCommandBuffer.h>

#import <MTLSimDriver/MTLCommandBufferSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerCommandStream-Protocol.h>

@class MTLResourceList;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimCommandBuffer : _MTLCommandBuffer <MTLCommandBufferSPI, MTLSerializerCommandStream>
{
    struct StorageEntry commandHead;
    struct BufferStorageEntry bufferHead;
    NSUInteger segmentCount;
    struct StorageEntry commandCurrentStorage;
    struct StorageEntry commandTail;
    struct StorageEntry commandPrevious;
    struct BufferStorageEntry bufferCurrentStorage;
    NSUInteger currentStorageOffset;
    BOOL continuation;
    unsigned int _reference;
    NSUInteger _protectionOptions;
    MTLResourceList *_resourceList;
    id <MTLDevice> device;
    id /* CDUnknownBlockType */ splitHandler;
}

@property(copy) id /* CDUnknownBlockType */ splitHandler; // @synthesize splitHandler;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (NSUInteger)protectionOptions;
- (void)setProtectionOptions:(NSUInteger)arg1;
- (void)addPurgedResource:(id)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)beginContinuation;
- (void)merge:(id)arg1;
- (void )getCommandBufferBytes:(NSUInteger)arg1;
- (void)endEncoding;
- (void)split;
- (void )getBufferBytes:(NSUInteger)arg1 alignment:(NSUInteger)arg2 buffer:(id )arg3 offset:(NSUInteger )arg4;
- (BOOL)addStateReference:(id)arg1;
- (BOOL)addResourceReference:(id)arg1 isWrite:(BOOL)arg2;
- (id)resourceStateCommandEncoder;
- (void)encodeWaitForEvent:(id)arg1 value:(NSUInteger)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(NSUInteger)arg2 timeout:(unsigned int)arg3;
- (void)encodeSignalEvent:(id)arg1 value:(NSUInteger)arg2;
- (void )getCommandBytes:(NSUInteger)arg1 forCommand:(unsigned int)arg2;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(NSUInteger)arg1;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
- (BOOL)commitAndWaitUntilSubmitted;
@property(readonly) unsigned int commandBufferRef;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;

@end

