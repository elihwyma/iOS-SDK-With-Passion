/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3ImportOperation.h>

@class ML3StoreItemPlaylistData, ML3StoreItemTrackData;

__attribute__((visibility("hidden")))
@interface ML3StoreImportOperation : ML3ImportOperation

{
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
}

- (void)main;
- (unsigned long long)importSource;
- (_Bool)_performImportWithTransaction:(id)arg1;
- (_Bool)_importTracksUsingImportSession:(struct ML3ImportSession *)arg1;
- (_Bool)_importPlaylistsUsingImportSession:(struct ML3ImportSession *)arg1;

@end
