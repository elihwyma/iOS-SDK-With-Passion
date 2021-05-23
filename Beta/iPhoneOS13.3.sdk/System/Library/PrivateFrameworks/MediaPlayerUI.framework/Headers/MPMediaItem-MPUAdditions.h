/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <MediaPlayer/MPMediaItem.h>

@interface MPMediaItem (MPUAdditions)

- (id)MPU_libraryLinkKind;
- (id)MPU_libraryLinkArtist;
- (id)MPU_libraryLinkPlaylistName;
- (id)MPU_containerLibraryLinkURL;
- (id)MPU_directStoreURL;

@end
