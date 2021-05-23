/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@protocol CFXPreviewViewControllerDelegate <Swift>

- (unsigned short)orientationUsedForCapture;
- (unsigned short)cameraModeUsedForCapture;
- (unsigned short)previewViewController:didStartExportingMediaItem: /* Error: Ran out of types for this method. */;
- (unsigned short)selectedAppIdentifierForPreviewViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)previewViewControllerDidStartEditingText: /* Error: Ran out of types for this method. */;
- (unsigned short)previewViewController:didProgress:exportingMediaItem: /* Error: Ran out of types for this method. */;
- (unsigned short)previewViewControllerDidHideUserInterface: /* Error: Ran out of types for this method. */;
- (unsigned short)previewViewControllerDidShowUserInterface: /* Error: Ran out of types for this method. */;
- (unsigned short)previewViewController:didFinishExportingMediaItem:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)mediaCapturedInFunCam;
- (unsigned short)previewViewControllerDidStopEditingText: /* Error: Ran out of types for this method. */;

@end
