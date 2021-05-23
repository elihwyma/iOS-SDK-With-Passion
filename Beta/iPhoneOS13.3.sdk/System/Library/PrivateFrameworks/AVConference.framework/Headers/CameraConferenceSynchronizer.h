/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCVideoRule;

__attribute__((visibility("hidden")))
@interface CameraConferenceSynchronizer : NSObject

{
    _Bool isConference720p;
    _Bool isConferenceOniPad;
    _Bool receivedRequestToChangeCamera;
    _Bool receivedFirstRemoteFrame;
    int cameraHasChangedToCapture;
    int didSendFirstRemoteFrameNotification;
    VCVideoRule *captureRule;
    struct CGSize localPortraitAspectRatio;
    CDUnknownBlockType remoteFrameNotificationBlock;
    CDUnknownBlockType didStopNotificationBlock;
}

@property (nonatomic, setter=setLocalPortraitAspectRatio:) struct CGSize localPortraitAspectRatio;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)scheduleFirstRemoteFrameNotification:(CDUnknownBlockType)arg1;
- (void)scheduleCameraChangeToCaptureSettings:(id)arg1;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)cameraSizeChangedTo:(struct CGSize)arg1;
- (_Bool)shouldConferenceSendFirstRemoteFrameNotification;
- (void)notifyClientOfRemoteFrame:(double)arg1;
- (_Bool)shouldConferenceChangeCameraToCaptureSettings;
- (void)changeCameraToCaptureSettings:(double)arg1 forced:(_Bool)arg2;
- (_Bool)shouldConferenceChangeCameraToPreviewSettings;

@end
