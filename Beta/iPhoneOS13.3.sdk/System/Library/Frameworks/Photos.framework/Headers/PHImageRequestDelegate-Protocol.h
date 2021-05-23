/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol PHImageRequestDelegate <Swift>

- (unsigned short)imageRequest:isQueryingCacheAndDidWait:didFindImage:resultHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)imageRequest:isRequestingScheduledWorkBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)imageRequest:isRequestingRepairAndRetryForDataStoreKey:inStore:assetObjectID:forValidationErrors: /* Error: Ran out of types for this method. */;

@end
