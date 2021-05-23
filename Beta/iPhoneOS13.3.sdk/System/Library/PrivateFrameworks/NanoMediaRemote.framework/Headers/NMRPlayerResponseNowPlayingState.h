/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <NanoMediaRemote/NMRNowPlayingState.h>

@class MPCPlayerResponse;

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState

{
    MPCPlayerResponse *_playerResponse;
}

@property (nonatomic, readonly) MPCPlayerResponse *playerResponse;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)timestamp;
- (id)title;
- (double)duration;
- (id)album;
- (id)artist;
- (id)identifiers;
- (id)applicationBundleIdentifier;
- (float)playbackRate;
- (unsigned int)playbackState;
- (int)repeatMode;
- (_Bool)isExplicitTrack;
- (_Bool)isAlwaysLive;
- (id)storeAdamID;
- (id)artworkCatalog;
- (int)shuffleMode;
- (float)preferredPlaybackRate;
- (id)radioStationName;
- (id)radioStationHash;
- (id)radioStationIdentifier;
- (_Bool)isAdvertisement;
- (id)itemPersistentID;
- (id)collectionTitle;
- (id)applicationDisplayName;
- (id)itemCompanionPersistentID;
- (id)itemAlbumPersistentID;
- (double)elapsedTimeAtLastUpdate;
- (_Bool)isRepeatModeCommandSupported;
- (_Bool)isShuffleModeCommandSupported;
- (_Bool)isPlaybackRateCommandSupported;
- (_Bool)isLikeCommandSupported;
- (_Bool)isLikeCommandEnabled;
- (_Bool)isLikedActive;
- (id)localizedLikeTitle;
- (long long)likeCommandPresentationStyle;
- (_Bool)isBanCommandSupported;
- (_Bool)isBanCommandEnabled;
- (_Bool)isBannedActive;
- (id)localizedBanTitle;
- (long long)banCommandPresentationStyle;
- (_Bool)isBookmarkCommandSupported;
- (_Bool)isBookmarkCommandEnabled;
- (_Bool)isBookmarkedActive;
- (id)localizedBookmarkTitle;
- (_Bool)isNextTrackCommandEnabled;
- (_Bool)isPreviousTrackCommandEnabled;
- (_Bool)isSkipForwardCommandEnabled;
- (_Bool)isSkipBackwardCommandEnabled;
- (double)fastForwardTimeInterval;
- (double)rewindTimeInterval;
- (_Bool)hasNowPlayingItem;
- (_Bool)hasUpNextQueue;
- (id)initWithPlayerResponse:(id)arg1;
- (id)_nowPlayingSong;
- (id)_nowPlayingRadioStation;

@end
