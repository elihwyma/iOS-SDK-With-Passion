/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBMediaSearch, _INPBString, _INPBTimestamp;

@protocol _INPBPlayMediaIntent <Swift>

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

+ (unsigned short)alternativeResultsType;
+ (unsigned short)audioSearchResultsType;
+ (unsigned short)bucketType;
+ (unsigned short)hashedRouteUIDsType;
+ (unsigned short)mediaItemsType;

- (unsigned short)addMediaItems: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMediaItems;
- (unsigned short)mediaItemsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAlternativeResults;
- (unsigned short)addAlternativeResults: /* Error: Ran out of types for this method. */;
- (unsigned short)alternativeResultsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAudioSearchResults;
- (unsigned short)addAudioSearchResults: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSearchResultsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearBuckets;
- (unsigned short)addBucket: /* Error: Ran out of types for this method. */;
- (unsigned short)bucketAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearHashedRouteUIDs;
- (unsigned short)addHashedRouteUIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)hashedRouteUIDsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)playbackQueueLocationAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPlaybackQueueLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)playbackRepeatModeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPlaybackRepeatMode: /* Error: Ran out of types for this method. */;

@end
