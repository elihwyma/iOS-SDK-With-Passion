/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject

{
    BWMotionSampleRingBuffer *_motionDataRingBuffer;
    struct OpaqueFigSimpleMutex *_ringMutex;
    _Bool _stationary;
    _Bool _newMotionDataAvailable;
    _Bool _robustMethodEnabled;
    _Bool _motionMetadataStatusChecked;
}

@property (nonatomic, readonly, getter=isStationary) _Bool stationary;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_detectIfStationary;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
