/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <Pegasus/Swift-Protocol.h>

@protocol PGPictureInPictureRemoteObjectInterface <Swift>

- (unsigned short)initializePictureInPictureWithControlsStyle:preferredContentSize:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setupStartAnimated:hostedWindowHostingHandle:sceneSessionPersistentIdentifier:preferredContentSize:initialInterfaceOrientation:initialLayerFrame:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startPictureInPictureAnimated:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePreferredContentSize:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)checkActivePictureInPictureCancellationPolicyWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)rotateContentContainer:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setupStopAnimated:activateApplicationIfNeeded:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stopPictureInPictureAnimated:withFinalInterfaceOrientation:finalLayerFrame:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setPictureInPictureShouldStartWhenEnteringBackground:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setControlsStyle:animated:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setShouldShowAlternateActionButtonImage:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setShouldShowLoadingIndicator:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setPlaybackProgress:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLoadedTimeRanges:completionHandler: /* Error: Ran out of types for this method. */;

@end
