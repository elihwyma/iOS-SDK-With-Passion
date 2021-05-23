/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol FigCaptureSessionObserver <Swift>

@property (readonly) int photoThumbnailMaxDimension;
@property (readonly) _Bool photoThumbnailQualitySpecified;
@property (readonly) float photoThumbnailQuality;

- (unsigned short)captureSessionDidStart: /* Error: Ran out of types for this method. */;
- (unsigned short)captureSessionDidStop: /* Error: Ran out of types for this method. */;
- (unsigned short)captureSession:didCapturePhotoWithStatus:thumbnailData:timestamp: /* Error: Ran out of types for this method. */;

@end
