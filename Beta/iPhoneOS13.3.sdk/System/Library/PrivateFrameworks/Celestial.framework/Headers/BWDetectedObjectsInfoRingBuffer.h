/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@protocol BWObjectDetector;

@interface BWDetectedObjectsInfoRingBuffer : NSObject

{
    NSMutableArray *_ringBuffer;
    struct OpaqueFigSimpleMutex *_mutex;
    int _depth;
    int _numConsecutiveFramesWithObjects;
    CDStruct_1b6d18a9 _lastUpdatePTS;
    CDStruct_1b6d18a9 _lastStableObjectPTS;
}

@property (readonly) id <BWObjectDetector> objectDetector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) float secondsSinceLastObjectDetected;

- (void)dealloc;
- (void)flush;
- (id)initWithRingBufferDepth:(int)arg1;
- (void)transferObjectsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 totalSensorCropRect:(struct CGRect)arg2;
- (void)addObjectsFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)getObjectsRects:(struct CGRect *)arg1 maxCount:(int)arg2 forPTS:(CDStruct_1b6d18a9)arg3;

@end
