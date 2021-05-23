/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol BWStillImageCaptureStatusDelegate <Swift>

- (unsigned short)stillImageCoordinator:willBeginCaptureForSettings:resolvedCaptureSettings:photoManifest: /* Error: Ran out of types for this method. */;
- (unsigned short)stillImageCoordinator:willCapturePhotoForSettings:sisActive:error: /* Error: Ran out of types for this method. */;
- (unsigned short)stillImageCoordinator:didResolveStillImagePTS:forSettings:resolvedCaptureSettings:isPreBracketedEV0: /* Error: Ran out of types for this method. */;
- (unsigned short)stillImageCoordinator:didSelectNewReferenceFrameWithPTS:transform:forSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)stillImageCoordinator:didCapturePhotoForSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)stillImageCoordinator:willPrepareStillImageCaptureWithSettings:clientInitiated: /* Error: Ran out of types for this method. */;
- (unsigned short)stillImageCoordinator:didCancelMomentCaptureForSettingsID:streamingDisruptionEndPTS: /* Error: Ran out of types for this method. */;

@end
