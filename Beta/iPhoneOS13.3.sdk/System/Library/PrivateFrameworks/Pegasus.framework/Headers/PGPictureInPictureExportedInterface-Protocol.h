/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <Pegasus/Swift-Protocol.h>

@protocol PGPictureInPictureExportedInterface <Swift>

- (unsigned short)actionButtonTapped;
- (unsigned short)pictureInPictureInterruptionBegan;
- (unsigned short)pictureInPictureInterruptionEnded;
- (unsigned short)pictureInPictureStartRequestedAnimated:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pictureInPictureStopRequestedAnimated:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pictureInPictureCancelRequestedAnimated:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePictureInPicturePossible: /* Error: Ran out of types for this method. */;
- (unsigned short)pictureInPictureSuspended;
- (unsigned short)pictureInPictureResumed;
- (unsigned short)pictureInPictureCancelled;
- (unsigned short)updateHostedWindowSize:animationType:initialSpringVelocity:synchronizationFence: /* Error: Ran out of types for this method. */;
- (unsigned short)hostedWindowSizeChangeBegan;
- (unsigned short)hostedWindowSizeChangeEnded;

@end
