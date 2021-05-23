/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <ImageCaptureCore/Swift-Protocol.h>

@protocol ICDeviceManagerProtocol <Swift>

- (unsigned short)openDevice:contextInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)closeDevice:contextInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)openSession:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)closeSession:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getFileThumbnail:fromDevice:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getFileMetadata:fromDevice:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getFileData:fromDevice:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncClock:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteFile:fromDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadFile:fromDevice:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendDevice:ptpCommand:andPayload:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerDevice:forImageCaptureEventNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterDevice:forImageCaptureEventNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)eject: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateContent;

@end
