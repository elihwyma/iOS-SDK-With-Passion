/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCMomentsHistoryBuffer : NSObject

{
    id _delegate;
    int _bufferLength;
    NSMutableArray *_timestampQueue;
    NSMutableDictionary *_sampleMap;
    unsigned int _lastTimestamp;
}

- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;
- (int)getCount;
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg1;
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;
- (void)flushBuffer;
- (void)dequeueOneFrame;
- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg1;
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;

@end
