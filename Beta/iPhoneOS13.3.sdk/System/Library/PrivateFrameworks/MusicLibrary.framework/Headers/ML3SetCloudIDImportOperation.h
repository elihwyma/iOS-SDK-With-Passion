/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3ImportOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ML3SetCloudIDImportOperation : ML3ImportOperation

{
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}

- (void)main;
- (unsigned long long)importSource;
- (_Bool)_performImportWithTransaction:(id)arg1;
- (_Bool)_importTracksUsingImportSession:(struct ML3ImportSession *)arg1;
- (_Bool)_importPlaylistsUsingImportSession:(struct ML3ImportSession *)arg1;

@end
