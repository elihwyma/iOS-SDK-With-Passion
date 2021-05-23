/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <ScreenshotServices/Swift-Protocol.h>

@protocol SSScreenshotAssetManagerBackend <Swift>

- (unsigned short)registerEntryWithImage:options:identifierHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)imageForPreviouslyRegisteredIdentifier:imageHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateImage:withModificationData:forEntryWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveImageToTemporaryLocation:withName:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeEntryWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;

@end
