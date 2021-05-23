/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdClientServiceProtocol <Swift>

- (unsigned short)downloadStatusForIdentifier:progress:completed:data:error: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadFinishedForIdentifier:success:url:data:info:error: /* Error: Ran out of types for this method. */;
- (unsigned short)assetAvailableForIdentifier:success:error: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceURLReceivedForIdentifier:url:info:error: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceRepairIdentifier:finishedWithSuccess:error: /* Error: Ran out of types for this method. */;
- (unsigned short)libraryBecameUnavailable:reason:reply: /* Error: Ran out of types for this method. */;

@end
