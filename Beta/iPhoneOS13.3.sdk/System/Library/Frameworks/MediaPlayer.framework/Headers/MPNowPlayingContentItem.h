/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPContentItem.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaItemArtwork, MPNowPlayingInfoLyricsItem, NSArray, NSDate, NSDictionary, NSString;

@protocol MPNowPlayingContentItemArtworkDataSource;

@interface MPNowPlayingContentItem : MPContentItem <Swift>

{
    NSDictionary *_nowPlayingInfo;
    id <MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;
}

@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSArray *availableLanguageOptions;
@property (copy, nonatomic) NSArray *currentLanguageOptions;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (nonatomic) double startTime;
@property (nonatomic) double elapsedTime;
@property (nonatomic) float playbackRate;
@property (nonatomic) long long storeAlbumID;
@property (nonatomic) long long storeArtistID;
@property (nonatomic) long long storeID;
@property (nonatomic) long long storeSubscriptionID;
@property (nonatomic) long long legacyUniqueID;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic, getter=isSharableItem) _Bool sharableItem;
@property (nonatomic, getter=isSteerable) _Bool steerable;
@property (nonatomic) long long episodeType;
@property (nonatomic, readonly) NSDictionary *auxiliaryNowPlayingInfo;
@property (retain, nonatomic) id <MPNowPlayingContentItemArtworkDataSource> artworkDataSource;
@property (copy, nonatomic) NSDictionary *collectionInfo;
@property (nonatomic, getter=isExplicitItem) _Bool explicitItem;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *trackArtistName;
@property (copy, nonatomic) NSString *albumArtistName;
@property (copy, nonatomic) NSString *directorName;
@property (copy, nonatomic) NSString *composerName;
@property (copy, nonatomic) NSString *genreName;
@property (copy, nonatomic) NSString *seriesName;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long discNumber;
@property (nonatomic) long long totalDiscCount;
@property (nonatomic) long long trackNumber;
@property (nonatomic) long long totalTrackCount;
@property (copy, nonatomic) NSString *albumYear;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSString *localizedContentRating;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (nonatomic) long long playlistType;
@property (nonatomic) long long radioStationType;
@property (copy, nonatomic) NSString *radioStationName;
@property (copy, nonatomic) NSString *radioStationStringIdentifier;
@property (copy, nonatomic) NSString *externalContentIdentifier;
@property (nonatomic) long long numberOfChildren;
@property (nonatomic) long long playCount;
@property (nonatomic) double duration;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic, getter=isAlwaysLiveItem) _Bool alwaysLiveItem;
@property (copy, nonatomic) NSString *localizedDurationString;
@property (nonatomic, readonly) double elapsedTimeTimestamp;
@property (nonatomic) long long editingStyleFlags;
@property (nonatomic) _Bool hasArtwork;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (copy, nonatomic) NSString *artworkURL;
@property (copy, nonatomic) NSArray *artworkURLTemplates;
@property (nonatomic) _Bool hasDescription;
@property (nonatomic) _Bool hasLanguageOptions;
@property (nonatomic) _Bool hasLyrics;

+ (_Bool)shouldPushArtworkData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithNewIdentifier:(id)arg1;
- (void)setElapsedTime:(double)arg1 playbackRate:(float)arg2;
- (void)invalidateLanguageOptions;
- (void)invalidateDescription;
- (void)invalidateLyrics;
- (void)invalidateArtwork;
- (void)_mergeContentItem:(id)arg1;

@end
