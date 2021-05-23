/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPStoreArtworkRequestToken, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface MPStoreItemMetadata : NSObject <Swift>

{
    NSDictionary *_downloadAssetDictionary;
    NSDictionary *_downloadMetadataDictionary;
    NSDictionary *_storeMusicAPIDictionary;
    NSDate *_expirationDate;
    _Bool _hasOverrideChildStorePlatformDictionaries;
    NSNumber *_hasSubscriptionOffer;
    NSArray *_overrideChildStorePlatformDictionaries;
    NSDictionary *_storePlatformDictionary;
    MPStoreItemMetadata *_parentStoreItemMetadata;
}

@property (copy, nonatomic, readonly) NSString *cacheableItemIdentifier;
@property (copy, nonatomic, readonly) MPStoreItemMetadata *parentStoreItemMetadata;
@property (copy, nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) MPStoreArtworkRequestToken *artworkRequestToken;
@property (copy, nonatomic, readonly) id artistStoreID;
@property (copy, nonatomic, readonly) NSArray *artworkTrackIDs;
@property (copy, nonatomic, readonly) NSString *artistUploadedContentType;
@property (nonatomic, readonly, getter=isBeats1) _Bool beats1;
@property (copy, nonatomic, readonly) NSArray *childrenStoreIDs;
@property (copy, nonatomic, readonly) NSArray *childStoreItemMetadatas;
@property (copy, nonatomic, readonly) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned long long cloudID;
@property (copy, nonatomic, readonly) NSString *collectionName;
@property (copy, nonatomic, readonly) id collectionStoreID;
@property (nonatomic, readonly, getter=isCompilation) _Bool compilation;
@property (copy, nonatomic, readonly) NSString *composerName;
@property (copy, nonatomic, readonly) NSString *copyrightText;
@property (copy, nonatomic, readonly) NSString *curatorName;
@property (copy, nonatomic, readonly) id curatorID;
@property (copy, nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) long long discCount;
@property (nonatomic, readonly) long long discNumber;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) NSString *editorNotes;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (copy, nonatomic, readonly) NSString *shortEditorNotes;
@property (copy, nonatomic, readonly) NSDictionary *effectiveStorePlatformDictionary;
@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic, readonly) long long explicitRating;
@property (nonatomic, readonly) _Bool hasArtistBiography;
@property (nonatomic, readonly) _Bool hasLyrics;
@property (nonatomic, readonly) _Bool hasTimeSyncedLyrics;
@property (nonatomic, readonly) _Bool hasSocialPosts;
@property (nonatomic, readonly) _Bool hasSubscriptionOffer;
@property (copy, nonatomic, readonly) NSArray *genreNames;
@property (nonatomic, readonly) _Bool isPreorder;
@property (copy, nonatomic, readonly) NSString *itemKind;
@property (copy, nonatomic, readonly) NSString *playlistType;
@property (copy, nonatomic, readonly) NSString *iTunesBrandType;
@property (nonatomic, readonly) MPStoreArtworkRequestToken *latestAlbumArtworkRequestToken;
@property (nonatomic, readonly) long long movementCount;
@property (copy, nonatomic, readonly) NSString *movementName;
@property (nonatomic, readonly) long long movementNumber;
@property (nonatomic, readonly) long long movieClipsCount;
@property (copy, nonatomic, readonly) NSArray *movieClips;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *offers;
@property (copy, nonatomic, readonly) NSArray *playlistIdentifiers;
@property (copy, nonatomic, readonly) NSNumber *popularity;
@property (copy, nonatomic, readonly) NSDate *releaseDate;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;
@property (copy, nonatomic, readonly) NSString *shortName;
@property (copy, nonatomic, readonly) NSNumber *shouldBookmarkPlayPosition;
@property (copy, nonatomic, readonly) NSString *versionHash;
@property (nonatomic, readonly) _Bool shouldReportPlayEvents;
@property (nonatomic, readonly) _Bool showComposer;
@property (copy, nonatomic, readonly) NSString *cloudUniversalLibraryID;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly) long long subscriptionAdamID;
@property (copy, nonatomic, readonly) id storeID;
@property (copy, nonatomic, readonly) NSArray *formerStoreAdamIDs;
@property (copy, nonatomic, readonly) id socialProfileID;
@property (nonatomic, readonly, getter=isStoreRedownloadable) _Bool storeRedownloadable;
@property (nonatomic, readonly) long long trackCount;
@property (nonatomic, readonly) long long trackNumber;
@property (nonatomic, readonly) long long seasonNumber;
@property (nonatomic, readonly) long long episodeCount;
@property (copy, nonatomic, readonly) NSURL *shortURL;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *videoSubtype;
@property (copy, nonatomic, readonly) NSString *workName;
@property (copy, nonatomic, readonly) NSString *handle;
@property (copy, nonatomic, readonly) NSString *nameRaw;
@property (nonatomic, readonly, getter=isPrivatePerson) _Bool privatePerson;
@property (nonatomic, readonly, getter=isVerifiedPerson) _Bool verifiedPerson;
@property (nonatomic, readonly) long long radioStationTypeID;
@property (nonatomic, readonly) _Bool isChart;
@property (copy, nonatomic, readonly) NSString *radioStationProviderName;

+ (_Bool)supportsSecureCoding;
+ (id)storeServerCalendar;
+ (id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadAssetDictionary:(id)arg1;
- (id)initWithStoreMusicAPIDictionary:(id)arg1;
- (id)initWithStorePlatformDictionary:(id)arg1;
- (id)initWithStorePlatformDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 expirationDate:(id)arg3;
- (_Bool)isMasteredForITunes;
- (id)artworkRequestTokenForEditorialArtworkKind:(id)arg1;
- (id)artworkRequestTokenForScreenshotArtwork;
- (id)artworkRequestTokenForUberArtworkKind:(id)arg1;
- (id)avatarArtworkRequestToken;
- (id)artworkRequestTokenForStorePlatformDictionary:(id)arg1;
- (id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1;
- (id)childStorePlatformDictionaryForStoreID:(id)arg1;
- (id)descriptionTextWithStyle:(id)arg1;
- (id)editorNotesWithStyle:(id)arg1;
- (id)tvEpisodeArtworkRequestToken;
- (id)tvShowArtworkRequestToken;
- (id)movieArtworkRequestToken;
- (id)flowcaseEditorialArtworkRequestToken;
- (id)brickEditorialArtworkRequestToken;
- (id)metadataByAppendingMetadata:(id)arg1;
- (id)metadataWithChildStorePlatformDictionaries:(id)arg1;
- (id)metadataWithParentMetadata:(id)arg1;
- (id)_storePlatformReleaseDateFormatter;
- (id)_musicAPIDateFormatter;
- (id)_storePlatformLastModifiedDateFormatter;
- (_Bool)hasMetadataForRequestReason:(unsigned long long)arg1;

@end
