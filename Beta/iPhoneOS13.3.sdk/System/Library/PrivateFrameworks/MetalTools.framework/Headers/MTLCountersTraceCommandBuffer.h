/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandBuffer : NSObject

{
    struct BinaryBuffer _commands;
    NSMutableArray *_encoders;
    struct AppendBuffer _samples;
    unsigned long long _flags;
    unsigned long long _timestamp;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)computeCommandEncoder;
- (void)waitUntilCompleted;
- (id)blitCommandEncoder;
- (void)presentDrawable:(id)arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)resourceStateCommandEncoder;
- (id)init:(_Bool)arg1;
- (id)renderCommandEncoder;
- (void)appendSamples:(const void *)arg1 length:(unsigned long long)arg2;
- (void)saveCommandBuffer:(const void *)arg1 queue:(id)arg2 profilingResults:(id)arg3;

@end
