/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class MPModelPlaylist, MPModelPlaylistEntry, MPModelRadioStation, MPModelSong, NSString;

@protocol MCDNowPlayingContentManagerProtocol

@property (nonatomic) _Bool limitedUI;
@property (nonatomic, readonly) MPModelSong *currentPlayingSong;
@property (nonatomic, readonly) MPModelPlaylistEntry *currentPlayingPlaylistEntry;
@property (nonatomic, readonly) MPModelPlaylist *currentPlayingPlaylist;
@property (nonatomic, readonly) MPModelRadioStation *currentPlayingRadioStation;
@property (weak, nonatomic) Class tableCellClass;
@property (copy, nonatomic, readonly) NSString *nowPlayingBundleID;

- (unsigned short)viewWillDisappear;
- (unsigned short)initWithDelegate:dataSource:bundleID: /* Error: Ran out of types for this method. */;
- (unsigned short)beginRequestObservation;
- (unsigned short)endRequestObservation;

@end
