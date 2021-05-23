/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVCaptureVisionDataOutputInternal : NSObject

{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    CDStruct_1b6d18a9 minFrameDuration;
    CDStruct_1b6d18a9 minBurstFrameDuration;
    CDStruct_1b6d18a9 maxBurstDuration;
    unsigned long long gaussianPyramidOctavesCount;
    float gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned long long maxKeypointsCount;
    _Bool featureBinningEnabled;
    _Bool featureOrientationAssignmentEnabled;
    float keypointDetectionThreshold;
}

- (id)init;
- (void)dealloc;

@end
