/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <SensorKitUI/Swift-Protocol.h>

@protocol SRAuthorizationPromptClientInterface <Swift>

- (unsigned short)authorizationRequestCompleted;
- (unsigned short)authorizationRequestFailedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationUIReadyForDisplayModally: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationPresentDeleteAllAlertWithTitle:actionTitle:cancelTitle: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationPresentDownloadPath:sandboxExtensionToken: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationRequestWillDisappear;
- (unsigned short)authorizationRequestDidDisappear;

@end
