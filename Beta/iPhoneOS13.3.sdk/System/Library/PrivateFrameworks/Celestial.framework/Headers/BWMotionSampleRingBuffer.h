/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject

{
    BWRingBuffer *_ringBuffer;
    double _maxDuration;
    int _maxCount;
}

- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (double)duration;
- (id)initWithMaxDuration:(double)arg1;
- (void)addMotionDataToRingBuffer:(CDStruct_75c063ac *)arg1 withSampleCount:(int)arg2;
- (CDStruct_75c063ac *)lastSample;

@end
