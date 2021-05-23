/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@protocol QLThumbnailAdditionIndexInterface

- (unsigned short)hasThumbnailForURLWrapper:updateLastHitDate:andSize:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFileSize:ofThumbnailForURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastHitDate:ofThumbnailForURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeThumbnailForURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addThumbnailForURLWrapper:size:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveAllAdditions: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAdditions;

@end
