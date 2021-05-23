/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUVideoDeviceControllerProviderDelegate <Swift>

- (unsigned short)didStartPreviewForProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)didStopPreviewForProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)captureDevicesChangedForProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)provider:cameraDidBecomeAvailableForUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)provider:didChangeLocalVideoAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)provider:didReceiveErrorFromCameraUniqueID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)provider:didReceiveFirstPreviewFrameFromCameraUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)provider:cameraZoomAvailabilityDidChange: /* Error: Ran out of types for this method. */;

@end
