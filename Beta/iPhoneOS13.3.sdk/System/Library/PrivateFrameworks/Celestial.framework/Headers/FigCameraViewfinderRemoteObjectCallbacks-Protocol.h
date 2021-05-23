/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol FigCameraViewfinderRemoteObjectCallbacks <Swift>

- (unsigned short)viewfinderSessionDidBegin:withIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)viewfinderSessionDidEnd;
- (unsigned short)viewfinderSession:didCapturePhotoWithStatus:thumbnailData:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)viewfinderSessionPreviewStreamDidOpen: /* Error: Ran out of types for this method. */;
- (unsigned short)viewfinderSession:previewStreamDidCloseWithStatus: /* Error: Ran out of types for this method. */;

@end
