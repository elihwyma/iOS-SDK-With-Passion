/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWStillImageTimeMachine : NSObject

{
    struct OpaqueFigSimpleMutex *_timeMachineMutex;
    struct opaqueCMSampleBuffer **_frames;
    _Bool _suspended;
    int _capacity;
}

@property (nonatomic, readonly) int capacity;

+ (void)initialize;
+ (_Bool)afComplete:(struct opaqueCMSampleBuffer *)arg1;

- (void)dealloc;
- (id)initWithCapacity:(int)arg1;
- (void)resume;
- (void)drain;
- (void)_drain;
- (struct opaqueCMSampleBuffer *)copyBestFrame;
- (int)insertFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)suspendAndDrain;

@end
