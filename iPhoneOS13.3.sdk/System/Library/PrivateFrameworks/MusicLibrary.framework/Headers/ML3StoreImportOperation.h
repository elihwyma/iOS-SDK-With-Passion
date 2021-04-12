//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3ImportOperation.h>

@class ML3StoreItemPlaylistData, ML3StoreItemTrackData;

__attribute__((visibility("hidden")))
@interface ML3StoreImportOperation : ML3ImportOperation
{
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
}

// - (void).cxx_destruct;
- (BOOL)_importPlaylistsUsingImportSession:(struct ML3ImportSession )arg1;
- (BOOL)_importTracksUsingImportSession:(struct ML3ImportSession )arg1;
- (BOOL)_performImportWithTransaction:(id)arg1;
- (void)main;
- (NSUInteger)importSource;

@end

