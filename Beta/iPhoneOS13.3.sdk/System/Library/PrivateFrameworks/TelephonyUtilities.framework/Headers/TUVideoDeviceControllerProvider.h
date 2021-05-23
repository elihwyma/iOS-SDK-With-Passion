/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class AVConferencePreview, NSArray, NSString, TUVideoEffect, VideoAttributes;

@protocol TUVideoDeviceControllerProviderDelegate;

__attribute__((visibility("hidden")))
@interface TUVideoDeviceControllerProvider : NSObject <Swift>

{
    id <TUVideoDeviceControllerProviderDelegate> _delegate;
    TUVideoEffect *_currentVideoEffect;
    AVConferencePreview *_preview;
}

@property (nonatomic, readonly) AVConferencePreview *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPreviewRunning) _Bool previewRunning;
@property (copy, nonatomic, readonly) NSString *localCameraUID;
@property (copy, nonatomic, readonly) NSArray *inputDevices;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (weak, nonatomic) id <TUVideoDeviceControllerProviderDelegate> delegate;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (nonatomic, readonly) NSArray *availableVideoEffects;

- (id)init;
- (void)startPreview;
- (void)stopPreview;
- (void)setLocalCameraWithUID:(id)arg1;
- (id)localVideoLayer:(_Bool)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(_Bool)arg2;
- (id)thumbnailImageForVideoEffectName:(id)arg1;
- (void)pausePreview;
- (void)setCameraZoomFactor:(double)arg1;
- (void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)beginPIPToPreviewAnimation;
- (void)endPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)endPreviewToPIPAnimation;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)cameraZoomAvailabilityDidChange:(_Bool)arg1;
- (void)captureDevicesChanged:(id)arg1;

@end
