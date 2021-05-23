/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBMediaSearch, _INPBString, _INPBTimestamp;

@interface _INPBPlayMediaIntent : PBCodable <Swift>

{
    struct {
        unsigned int playShuffled:1;
        unsigned int playbackQueueLocation:1;
        unsigned int playbackRepeatMode:1;
        unsigned int playbackSpeed:1;
        unsigned int resumePlayback:1;
    } _has;
    _Bool _playShuffled;
    _Bool _resumePlayback;
    _Bool __encodeLegacyGloryData;
    int _playbackQueueLocation;
    int _playbackRepeatMode;
    NSArray *_alternativeResults;
    NSArray *_audioSearchResults;
    _INPBString *_audiobookAuthor;
    _INPBString *_audiobookTitle;
    NSArray *_buckets;
    _INPBTimestamp *_expirationDate;
    NSArray *_hashedRouteUIDs;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaItemValue *_mediaContainer;
    NSArray *_mediaItems;
    _INPBMediaSearch *_mediaSearch;
    _INPBString *_mediaUserContext;
    _INPBString *_musicArtistName;
    double _playbackSpeed;
    _INPBString *_playlistTitle;
    NSString *_proxiedBundleIdentifier;
    NSString *_recoID;
    _INPBString *_showTitle;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *alternativeResults;
@property (nonatomic, readonly) unsigned long long alternativeResultsCount;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (nonatomic, readonly) unsigned long long audioSearchResultsCount;
@property (retain, nonatomic) _INPBString *audiobookAuthor;
@property (nonatomic, readonly) _Bool hasAudiobookAuthor;
@property (retain, nonatomic) _INPBString *audiobookTitle;
@property (nonatomic, readonly) _Bool hasAudiobookTitle;
@property (copy, nonatomic) NSArray *buckets;
@property (nonatomic, readonly) unsigned long long bucketsCount;
@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) _Bool hasExpirationDate;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic, readonly) unsigned long long hashedRouteUIDsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBMediaItemValue *mediaContainer;
@property (nonatomic, readonly) _Bool hasMediaContainer;
@property (copy, nonatomic) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (nonatomic, readonly) _Bool hasMediaSearch;
@property (retain, nonatomic) _INPBString *mediaUserContext;
@property (nonatomic, readonly) _Bool hasMediaUserContext;
@property (retain, nonatomic) _INPBString *musicArtistName;
@property (nonatomic, readonly) _Bool hasMusicArtistName;
@property (nonatomic) _Bool playShuffled;
@property (nonatomic) _Bool hasPlayShuffled;
@property (nonatomic) int playbackQueueLocation;
@property (nonatomic) _Bool hasPlaybackQueueLocation;
@property (nonatomic) int playbackRepeatMode;
@property (nonatomic) _Bool hasPlaybackRepeatMode;
@property (nonatomic) double playbackSpeed;
@property (nonatomic) _Bool hasPlaybackSpeed;
@property (retain, nonatomic) _INPBString *playlistTitle;
@property (nonatomic, readonly) _Bool hasPlaylistTitle;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (nonatomic, readonly) _Bool hasProxiedBundleIdentifier;
@property (copy, nonatomic) NSString *recoID;
@property (nonatomic, readonly) _Bool hasRecoID;
@property (nonatomic) _Bool resumePlayback;
@property (nonatomic) _Bool hasResumePlayback;
@property (retain, nonatomic) _INPBString *showTitle;
@property (nonatomic, readonly) _Bool hasShowTitle;

+ (_Bool)supportsSecureCoding;
+ (Class)alternativeResultsType;
+ (Class)audioSearchResultsType;
+ (Class)bucketType;
+ (Class)hashedRouteUIDsType;
+ (Class)mediaItemsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (void)clearAlternativeResults;
- (void)addAlternativeResults:(id)arg1;
- (id)alternativeResultsAtIndex:(unsigned long long)arg1;
- (void)clearAudioSearchResults;
- (void)addAudioSearchResults:(id)arg1;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (void)clearBuckets;
- (void)addBucket:(id)arg1;
- (id)bucketAtIndex:(unsigned long long)arg1;
- (void)clearHashedRouteUIDs;
- (void)addHashedRouteUIDs:(id)arg1;
- (id)hashedRouteUIDsAtIndex:(unsigned long long)arg1;
- (id)playbackQueueLocationAsString:(int)arg1;
- (int)StringAsPlaybackQueueLocation:(id)arg1;
- (id)playbackRepeatModeAsString:(int)arg1;
- (int)StringAsPlaybackRepeatMode:(id)arg1;

@end
