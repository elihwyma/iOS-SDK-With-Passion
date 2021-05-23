/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class MPArtworkCatalog, MPIdentifierSet, NSData, NSDate, NSNumber, NSString;

@interface NMRNowPlayingState : NSObject

{
    float _preferredPlaybackRate;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic, readonly) float preferredPlaybackRate;
@property (nonatomic, readonly) unsigned int playbackState;
@property (nonatomic, readonly) double elapsedTimeAtLastUpdate;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) _Bool hasNowPlayingInfo;
@property (nonatomic, readonly) _Bool hasNowPlayingItem;
@property (nonatomic, readonly) _Bool hasUpNextQueue;
@property (nonatomic, readonly) MPIdentifierSet *identifiers;
@property (nonatomic, readonly) NSNumber *itemPersistentID;
@property (nonatomic, readonly) NSNumber *itemCompanionPersistentID;
@property (nonatomic, readonly) NSNumber *itemAlbumPersistentID;
@property (nonatomic, readonly) NSNumber *storeAdamID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly, getter=isExplicitTrack) _Bool explicitTrack;
@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly) NSString *collectionTitle;
@property (nonatomic, readonly) NSString *radioStationName;
@property (nonatomic, readonly) NSNumber *radioStationIdentifier;
@property (nonatomic, readonly) NSString *radioStationHash;
@property (nonatomic, readonly, getter=isAdvertisement) _Bool advertisement;
@property (nonatomic, readonly, getter=isAlwaysLive) _Bool alwaysLive;
@property (nonatomic, readonly, getter=isPlayingRadio) _Bool playingRadio;
@property (nonatomic, readonly, getter=isFirstPartyApp) _Bool firstPartyApp;
@property (nonatomic, readonly) NSString *applicationDisplayName;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSData *applicationIconImageData;
@property (nonatomic, readonly, getter=isRepeatModeCommandSupported) _Bool repeatModeCommandSupported;
@property (nonatomic, readonly) int repeatMode;
@property (nonatomic, readonly, getter=isShuffleModeCommandSupported) _Bool shuffleModeCommandSupported;
@property (nonatomic, readonly) int shuffleMode;
@property (nonatomic, readonly, getter=isPlaybackRateCommandSupported) _Bool playbackRateCommandSupported;
@property (nonatomic, readonly, getter=isLikeCommandSupported) _Bool likeCommandSupported;
@property (nonatomic, readonly, getter=isLikeCommandEnabled) _Bool likeCommandEnabled;
@property (nonatomic, readonly, getter=isLikedActive) _Bool likedActive;
@property (nonatomic, readonly) NSString *localizedLikeTitle;
@property (nonatomic, readonly) long long likeCommandPresentationStyle;
@property (nonatomic, readonly, getter=isBanCommandSupported) _Bool banCommandSupported;
@property (nonatomic, readonly, getter=isBanCommandEnabled) _Bool banCommandEnabled;
@property (nonatomic, readonly, getter=isBannedActive) _Bool bannedActive;
@property (nonatomic, readonly) NSString *localizedBanTitle;
@property (nonatomic, readonly) long long banCommandPresentationStyle;
@property (nonatomic, readonly, getter=isBookmarkCommandSupported) _Bool bookmarkCommandSupported;
@property (nonatomic, readonly, getter=isBookmarkCommandEnabled) _Bool bookmarkCommandEnabled;
@property (nonatomic, readonly, getter=isBookmarkedActive) _Bool bookmarkedActive;
@property (nonatomic, readonly) NSString *localizedBookmarkTitle;
@property (nonatomic, readonly, getter=isNextTrackCommandEnabled) _Bool nextTrackCommandEnabled;
@property (nonatomic, readonly, getter=isPreviousTrackCommandEnabled) _Bool previousTrackCommandEnabled;
@property (nonatomic, readonly, getter=isSkipForwardCommandEnabled) _Bool skipForwardCommandEnabled;
@property (nonatomic, readonly, getter=isSkipBackwardCommandEnabled) _Bool skipBackwardCommandEnabled;
@property (nonatomic, readonly) double fastForwardTimeInterval;
@property (nonatomic, readonly) double rewindTimeInterval;

+ (id)emptyNowPlayingState;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)compareWithNowPlayingState:(id)arg1;

@end
