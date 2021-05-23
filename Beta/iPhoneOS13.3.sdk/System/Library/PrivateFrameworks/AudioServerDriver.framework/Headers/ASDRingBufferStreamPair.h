/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class ASDStream;

@protocol ASDManagedRingBuffer;

@interface ASDRingBufferStreamPair : NSObject

{
    ASDStream *_inputStream;
    ASDStream *_outputStream;
    long long _ringBufferFrameCapacity;
    id <ASDManagedRingBuffer> _ringBuffer;
}

@property (nonatomic, readonly) id <ASDManagedRingBuffer> ringBuffer;
@property (nonatomic, readonly) ASDStream *inputStream;
@property (nonatomic, readonly) ASDStream *outputStream;
@property (nonatomic) long long ringBufferFrameCapacity;

- (id)initWithRingBufferFrameCapacity:(long long)arg1 withPlugin:(id)arg2;

@end
