/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureInputPort, AVWeakReference, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureConnectionInternal : NSObject

{
    NSMutableArray *inputPorts;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    _Bool hasActiveObservers;
    _Bool active;
    _Bool enabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    AVCaptureInputPort *depthDataInputPort;
    AVCaptureInputPort *visionDataInputPort;
    _Bool videoMirroringSupported;
    _Bool automaticallyAdjustsVideoMirroring;
    _Bool videoMirrored;
    _Bool videoOrientationSupported;
    long long videoOrientation;
    CDStruct_1b6d18a9 videoMinFrameDuration;
    CDStruct_1b6d18a9 videoMaxFrameDuration;
    double videoMaxScaleAndCropFactor;
    double videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    long long preferredVideoStabilizationMode;
    _Bool videoStabilizationEnabled;
    long long activeVideoStabilizationMode;
    _Bool hasVideoMinFrameDurationObserver;
    NSString *connectionID;
    _Bool cameraIntrinsicMatrixDeliverySupported;
    _Bool cameraIntrinsicMatrixDeliveryEnabled;
    _Bool livePhotoMetadataWritingEnabled;
    _Bool debugMetadataSidecarFileEnabled;
}

@end
