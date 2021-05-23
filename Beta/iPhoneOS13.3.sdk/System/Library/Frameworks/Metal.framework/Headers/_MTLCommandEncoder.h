/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class NSString, _MTLCommandBuffer;

@protocol MTLCommandBuffer, MTLDevice;

@interface _MTLCommandEncoder : _MTLObjectWithLabel

{
    id <MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (nonatomic, readonly, getter=getType) unsigned long long type;
@property (nonatomic) unsigned long long numThisEncoder;
@property (readonly) unsigned long long dispatchType;

- (void)dealloc;
- (id)description;
- (void)endEncoding;
- (id)commandBuffer;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)insertDebugSignpost:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)memoryBarrierNotificationWithResources:(const id *)arg1 count:(unsigned long long)arg2;

@end
