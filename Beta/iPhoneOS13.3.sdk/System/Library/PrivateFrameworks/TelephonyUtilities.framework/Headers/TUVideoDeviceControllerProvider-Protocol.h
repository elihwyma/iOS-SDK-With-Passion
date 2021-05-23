/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSString, VideoAttributes;

@protocol TUVideoDeviceControllerProviderDelegate;

@protocol TUVideoDeviceControllerProvider <Swift>

@property (nonatomic, readonly, getter=isPreviewRunning) _Bool previewRunning;
@property (copy, nonatomic, readonly) NSString *localCameraUID;
@property (copy, nonatomic, readonly) NSArray *inputDevices;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (weak, nonatomic) id <TUVideoDeviceControllerProviderDelegate> delegate;

- (unsigned short)startPreview;
- (unsigned short)stopPreview;
- (unsigned short)setLocalCameraWithUID: /* Error: Ran out of types for this method. */;
- (unsigned short)localVideoLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalVideoLayer:front: /* Error: Ran out of types for this method. */;
- (unsigned short)pausePreview;
- (unsigned short)setCameraZoomFactor: /* Error: Ran out of types for this method. */;
- (unsigned short)rampCameraZoomFactor:withRate: /* Error: Ran out of types for this method. */;
- (unsigned short)beginPIPToPreviewAnimation;
- (unsigned short)endPIPToPreviewAnimation;
- (unsigned short)beginPreviewToPIPAnimation;
- (unsigned short)endPreviewToPIPAnimation;
- (unsigned short)localScreenAttributesForVideoAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalScreenAttributes: /* Error: Ran out of types for this method. */;

@end
