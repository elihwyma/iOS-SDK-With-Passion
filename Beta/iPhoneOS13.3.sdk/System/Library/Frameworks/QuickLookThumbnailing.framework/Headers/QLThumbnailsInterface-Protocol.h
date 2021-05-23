/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@protocol QLThumbnailsInterface

- (unsigned short)reset;
- (unsigned short)requestThumbnailOfMaximumSize:scale:forThumbnailItem:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)generateSuccessiveThumbnailRepresentationsForRequests:generationHandler:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelThumbnailRequests: /* Error: Ran out of types for this method. */;
- (unsigned short)requestWritingThumbnailOfMaximumSize:forThumbnailItem:toFileHandle:atBackgroundPriority:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getCanGenerateThumbnailsForContentType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)thumbnailsStoreURLForURL:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeThumbnailAdditionsOnURL:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)hasThumbnailForURLWrapper:updateLastHitDate:andSize:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)askThumbnailAdditionIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)requestWritingThumbnailOfMaximumSize:forDocumentAtURL:sandboxExtension:toFileHandle:atBackgroundPriority:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLastHitDateOfAllCachedThumbnailsToDate:withCompletionHandler: /* Error: Ran out of types for this method. */;

@end
