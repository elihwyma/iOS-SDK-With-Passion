/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@protocol PTPCameraProtocol

- (unsigned short)postNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)openDeviceSessionWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPTPCommand:andPayload:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestMetadataForObjectHandle:options:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestThumbnailDataForObjectHandle:options:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDownloadObjectHandle:options:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestReadDataFromObjectHandle:options:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)imageCaptureEventNotification:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDeleteObjectHandle:options:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestStartUsingDeviceWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateContentWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)ptpEventForwarding: /* Error: Ran out of types for this method. */;
- (unsigned short)registerInterestedEventNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterInterestedEventNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyAddedItems: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyPTPEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyContentCatalogPercentCompleted: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyDeviceCloseWithUSBLocationID: /* Error: Ran out of types for this method. */;

@end
