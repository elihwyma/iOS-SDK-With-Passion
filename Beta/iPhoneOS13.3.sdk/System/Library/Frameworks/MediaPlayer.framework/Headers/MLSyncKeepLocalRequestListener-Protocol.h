/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@protocol MLSyncKeepLocalRequestListener <Swift>

- (unsigned short)handleKeepLocalStatusChanged:forLibraryIdentifier:entityType:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelDownloads;
- (unsigned short)cancelDownloadsForMediaTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)enqueueAssetForDownload:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadLibraryWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
