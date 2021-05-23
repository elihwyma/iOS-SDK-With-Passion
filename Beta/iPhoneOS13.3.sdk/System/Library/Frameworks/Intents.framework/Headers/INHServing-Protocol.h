/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@protocol INHServing

- (unsigned short)storeImage:scaled:qualityOfService:storeType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveImageWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeImageWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)storeUserContext:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchShareExtensionIntentForExtensionContextUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)loadBundleURLsForBundleIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)loadSchemaURLsForBundleIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)loadSchemaURLsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)loadDataImageForImage:scaledWidth:scaledHeight:usingPortableImageLoader:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeExpiredImagesInEphemeralStore;

@end
