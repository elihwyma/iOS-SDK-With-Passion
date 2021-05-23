/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureMetadataOutputInternal : NSObject

{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    struct CGRect rectOfInterest;
    _Bool faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    _Bool faceTrackingUsesFaceRecognition;
    _Bool offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
}

- (id)init;
- (void)dealloc;

@end
