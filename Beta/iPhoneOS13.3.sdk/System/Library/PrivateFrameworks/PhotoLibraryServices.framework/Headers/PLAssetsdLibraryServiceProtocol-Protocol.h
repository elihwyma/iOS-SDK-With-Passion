/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdLibraryServiceProtocol <Swift>

- (unsigned short)publishRemoteChangeEvent:delayedSaveActionsDetail:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)launchAssetsd;
- (unsigned short)getCurrentModelVersionWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)createPhotoLibraryDatabaseWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)openPhotoLibraryDatabaseWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)upgradePhotoLibraryDatabaseWithOptions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)postOpenProgressWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)shutdownPhotoLibraryDatabaseWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhotoLibraryStoreXPCListenerEndpointWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)importFileSystemAssetsWithReason:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)recoverFromCrashIfNeeded;
- (unsigned short)repairSingletonObjectsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateThumbnailsForPhotos:assignNewIndex:forceRefresh:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)automaticallyDeleteEmptyAlbumWithObjectURI:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)pendingEventsForRequest:reply: /* Error: Ran out of types for this method. */;

@end
