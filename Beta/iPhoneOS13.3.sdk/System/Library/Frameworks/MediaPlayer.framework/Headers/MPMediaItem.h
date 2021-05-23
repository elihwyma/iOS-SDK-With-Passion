/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItemArtwork, NSArray, NSDate, NSString, NSURL;

@interface MPMediaItem : MPMediaEntity

@property (nonatomic, readonly) NSArray *chapters;
@property (copy, nonatomic) NSDate *lastPlayedDate;
@property (nonatomic, readonly) _Bool isRental;
@property (nonatomic, readonly) _Bool isITunesU;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double stopTime;
@property (nonatomic, readonly) unsigned long long year;
@property (nonatomic) unsigned long long skipCountSinceSync;
@property (nonatomic) unsigned long long playCountSinceSync;
@property (copy, nonatomic) NSDate *lastSkippedDate;
@property (copy, nonatomic) NSDate *dateAccessed;
@property (nonatomic) _Bool hasBeenPlayed;
@property (nonatomic, readonly) _Bool rememberBookmarkTime;
@property (nonatomic, readonly) NSDate *dateDownloaded;
@property (nonatomic, readonly) double effectiveStopTime;
@property (nonatomic, readonly) NSString *effectiveAlbumArtist;
@property (nonatomic, readonly) _Bool isUsableAsRepresentativeItem;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) unsigned long long albumPersistentID;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) unsigned long long artistPersistentID;
@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly) unsigned long long albumArtistPersistentID;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genrePersistentID;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly) unsigned long long composerPersistentID;
@property (nonatomic, readonly) double playbackDuration;
@property (nonatomic, readonly) unsigned long long albumTrackNumber;
@property (nonatomic, readonly) unsigned long long albumTrackCount;
@property (nonatomic, readonly) unsigned long long discNumber;
@property (nonatomic, readonly) unsigned long long discCount;
@property (nonatomic, readonly) MPMediaItemArtwork *artwork;
@property (nonatomic, readonly, getter=isExplicitItem) _Bool explicitItem;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly, getter=isCompilation) _Bool compilation;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) unsigned long long beatsPerMinute;
@property (nonatomic, readonly) NSString *comments;
@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic, readonly, getter=isCloudItem) _Bool cloudItem;
@property (nonatomic, readonly, getter=hasProtectedAsset) _Bool protectedAsset;
@property (nonatomic, readonly) NSString *podcastTitle;
@property (nonatomic, readonly) unsigned long long podcastPersistentID;
@property (nonatomic, readonly) unsigned long long playCount;
@property (nonatomic, readonly) unsigned long long skipCount;
@property (nonatomic, readonly) unsigned long long rating;
@property (nonatomic, readonly) NSString *userGrouping;
@property (nonatomic, readonly) double bookmarkTime;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) NSString *playbackStoreID;

+ (_Bool)supportsSecureCoding;
+ (id)artworkCatalogCacheProperties;
+ (id)screenshotArtworkCatalogCacheProperties;
+ (_Bool)canFilterByProperty:(id)arg1;
+ (void)_createFilterableDictionary;
+ (_Bool)_isValidItemProperty:(id)arg1;
+ (id)itemFromSong:(id)arg1;
+ (id)persistentIDPropertyForGroupingType:(long long)arg1;
+ (id)ULIDPropertyForGroupingType:(long long)arg1;
+ (id)titlePropertyForGroupingType:(long long)arg1;
+ (id)fallbackTitlePropertyForGroupingType:(long long)arg1;
+ (id)dynamicProperties;
+ (id)MPSD_mediaItemPropertiesForDownloadability;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)representativeItem;
- (void)didReceiveMemoryWarning;
- (void)setRating:(unsigned long long)arg1;
- (void)setPlayCount:(unsigned long long)arg1;
- (void)incrementPlayCount;
- (id)artworkCatalog;
- (id)screenshotArtworkCatalog;
- (id)_artworkCatalogWithArtworkType:(long long)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (_Bool)existsInLibrary;
- (id)multiverseIdentifier;
- (id)valuesForProperties:(id)arg1;
- (_Bool)didSkipWithPlayedToTime:(double)arg1;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (_Bool)incrementPlayCountForStopTime:(double)arg1;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;
- (double)nominalHasBeenPlayedThreshold;
- (id)_bestStoreURL;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clearLocationProperties;
- (id)predicateForProperty:(id)arg1;
- (void)setSkipCount:(unsigned long long)arg1;
- (id)chaptersOfType:(long long)arg1;
- (id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)chapterOfType:(long long)arg1 atTime:(double)arg2;
- (unsigned long long)countOfChaptersOfType:(long long)arg1;
- (void)gaplessHeuristicInfo:(unsigned int *)arg1 durationInSamples:(unsigned long long *)arg2 lastPacketsResync:(unsigned long long *)arg3 encodingDelay:(unsigned int *)arg4 encodingDrain:(unsigned int *)arg5;
- (id)_directStoreURL;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkURL;
- (_Bool)MPSD_isDownloadable;
- (_Bool)MPSD_isDownloadInProgress;

@end
