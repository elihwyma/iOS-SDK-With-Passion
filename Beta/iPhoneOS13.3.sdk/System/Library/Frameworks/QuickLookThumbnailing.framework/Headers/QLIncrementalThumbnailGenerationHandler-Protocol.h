/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@protocol QLIncrementalThumbnailGenerationHandler

- (unsigned short)didUpdateStatus:ofThumbnailGenerationWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)didGenerateThumbnailForRequestWithUUID:data:bitmapFormat:metadata:contentRect:iconFlavor:thumbnailType:clientShouldTakeOwnership: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToGenerateThumbnailOfType:forRequestWithUUID:error: /* Error: Ran out of types for this method. */;

@end
