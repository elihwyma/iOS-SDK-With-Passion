/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <AccessoryMediaLibrary/Swift-Protocol.h>

@protocol ACCMediaLibraryXPCClientProtocol <Swift>

- (unsigned short)accessoryMediaLibraryAttached:windowPerLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryMediaLibraryDetached: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryMediaLibraryUpdate:windowPerLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)startMediaLibraryUpdate:library:lastRevision:mediaItemProperties:playlistProperties:playlistContentStyle:playlistContentProperties:reqOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMediaLibraryUpdate:library: /* Error: Ran out of types for this method. */;
- (unsigned short)stopAllMediaLibraryUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)confirmUpdate:library:lastRevision:updateCount: /* Error: Ran out of types for this method. */;
- (unsigned short)confirmPlaylistContentUpdate:library:lastRevision: /* Error: Ran out of types for this method. */;
- (unsigned short)playCurrentSelection:library: /* Error: Ran out of types for this method. */;
- (unsigned short)playItems:library:itemList:startIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)playCollection:library:collection:type:startItem: /* Error: Ran out of types for this method. */;
- (unsigned short)playCollection:library:collection:type:startIndex: /* Error: Ran out of types for this method. */;

@end
