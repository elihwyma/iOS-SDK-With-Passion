/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol ICCameraDeviceDelegate <Swift>

- (unsigned short)deviceDidBecomeReadyWithCompleteContentCatalog: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDevice:didAddItems: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDevice:didRemoveItems: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDeviceDidRemoveAccessRestriction: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDevice:didReceivePTPEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDevice:didReceiveThumbnail:forItem:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDevice:didReceiveMetadata:forItem:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDeviceDidChangeCapability: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDevice:didRenameItems: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraDeviceDidEnableAccessRestriction: /* Error: Ran out of types for this method. */;

@end
