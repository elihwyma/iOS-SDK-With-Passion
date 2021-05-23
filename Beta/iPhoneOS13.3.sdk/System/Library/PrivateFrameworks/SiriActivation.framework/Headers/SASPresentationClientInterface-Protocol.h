/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@protocol SASPresentationClientInterface

- (unsigned short)willDismiss;
- (unsigned short)unregisterPresentationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)registerPresentationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToPresentSiriWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)didPresentSiri;
- (unsigned short)didDismiss;
- (unsigned short)handleMarkBulletinWithIdentifier:asRead: /* Error: Ran out of types for this method. */;
- (unsigned short)bulletinsOnLockScreen;
- (unsigned short)allBulletins;
- (unsigned short)speechRequestStartedFromSiriOrb;
- (unsigned short)speechRequestCancelledFromSiriOrb;
- (unsigned short)bulletinForIdentifier: /* Error: Ran out of types for this method. */;

@end
