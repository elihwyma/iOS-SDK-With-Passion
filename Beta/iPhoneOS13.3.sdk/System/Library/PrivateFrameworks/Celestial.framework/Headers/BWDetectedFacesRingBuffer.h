/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@protocol BWFaceDetector;

@interface BWDetectedFacesRingBuffer : NSObject

{
    NSMutableArray *_ringBuffer;
    struct OpaqueFigSimpleMutex *_mutex;
    int _depth;
    int _numConsecutiveFramesWithFaces;
    CDStruct_1b6d18a9 _lastUpdatePTS;
    CDStruct_1b6d18a9 _lastStableFacePTS;
}

@property (readonly) id <BWFaceDetector> faceDetector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) float secondsSinceLastFaceDetected;

- (void)dealloc;
- (void)flush;
- (id)initWithDepth:(int)arg1;
- (void)transferFacesToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 totalSensorCropRect:(struct CGRect)arg2;
- (void)addFacesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)getFaceRects:(struct CGRect *)arg1 maxCount:(int)arg2 forPTS:(CDStruct_1b6d18a9)arg3;

@end
