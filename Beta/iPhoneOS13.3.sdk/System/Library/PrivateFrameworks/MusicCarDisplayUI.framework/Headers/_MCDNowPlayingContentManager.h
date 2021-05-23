/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class CARSessionStatus, MPArtworkCatalog, MPCPlayerResponse, MPCPlayerResponseItem, MPModelPlaylist, MPModelPlaylistEntry, MPModelRadioStation, MPModelSong, MPRequestResponseController, MSVTimer, NSString, UIAlertController, UIImage, UITableView;

@protocol MCDNowPlayingContentManagerDelegate, MCDNowPlayingDataSource;

@interface _MCDNowPlayingContentManager : NSObject

{
    _Bool limitedUI;
    Class tableCellClass;
    MPModelSong *currentPlayingSong;
    MPModelPlaylistEntry *currentPlayingPlaylistEntry;
    MPModelPlaylist *currentPlayingPlaylist;
    MPModelRadioStation *currentPlayingRadioStation;
    MPRequestResponseController *_requestController;
    UIImage *_albumArtwork;
    MPArtworkCatalog *_artworkCatalog;
    id <MCDNowPlayingDataSource> _dataSource;
    NSString *_bundleID;
    CARSessionStatus *_carSessionStatus;
    UIAlertController *_alertController;
    MSVTimer *_artworkTimer;
    id <MCDNowPlayingContentManagerDelegate> _delegate;
    MPCPlayerResponse *_lastReceivedResponse;
    UITableView *_tableView;
    MPCPlayerResponseItem *_nowPlayingItem;
}

@property (retain, nonatomic) MPRequestResponseController *requestController;
@property (retain, nonatomic) UIImage *albumArtwork;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (weak, nonatomic) id <MCDNowPlayingDataSource> dataSource;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) CARSessionStatus *carSessionStatus;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) MPModelSong *currentPlayingSong;
@property (retain, nonatomic) MPModelPlaylistEntry *currentPlayingPlaylistEntry;
@property (retain, nonatomic) MPModelPlaylist *currentPlayingPlaylist;
@property (retain, nonatomic) MPModelRadioStation *currentPlayingRadioStation;
@property (retain, nonatomic) MSVTimer *artworkTimer;
@property (weak, nonatomic) id <MCDNowPlayingContentManagerDelegate> delegate;
@property (retain, nonatomic) MPCPlayerResponse *lastReceivedResponse;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MPCPlayerResponseItem *nowPlayingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool limitedUI;
@property (weak, nonatomic) Class tableCellClass;
@property (copy, nonatomic, readonly) NSString *nowPlayingBundleID;

- (void)dealloc;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (void)sessionDidConnect:(id)arg1;
- (void)_limitedUIChanged:(id)arg1;
- (void)_performRequest;
- (id)_setupRequest;
- (void)_showPlaceholderArtwork;
- (void)viewWillDisappear;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 bundleID:(id)arg3;
- (void)beginRequestObservation;
- (void)endRequestObservation;
- (_Bool)_shouldShowPlaybackQueueForItemCount:(long long)arg1;
- (void)processArtworkForCurrentlyPlayingSong;
- (void)_processResponse:(id)arg1 error:(id)arg2;
- (void)_performChangeRequest:(id)arg1;
- (id)nowPlayingViewControllerGetPlaybackRate:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (_Bool)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (CDStruct_fce57115)durationSnapshotForNowPlayingViewController:(id)arg1;
- (_Bool)nowPlayingViewControllerIsPlaying:(id)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(id)arg1;
- (long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShuffle:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (_Bool)nowPlayingViewControllerCanRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(id)arg1;
- (void)modelResponseDidInvalidate:(id)arg1;

@end
