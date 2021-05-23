/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface ICStorePlatformMetadata : NSObject

{
    NSDate *_expirationDate;
    NSDictionary *_metadataDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *metadataDictionary;
@property (copy, nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) long long artistStoreAdamID;
@property (copy, nonatomic, readonly) NSString *cloudUniversalLibraryID;
@property (copy, nonatomic, readonly) NSString *collectionName;
@property (nonatomic, readonly) long long collectionStoreAdamID;
@property (copy, nonatomic, readonly) NSString *composerName;
@property (copy, nonatomic, readonly) NSString *copyrightText;
@property (nonatomic, readonly) long long discNumber;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) long long explicitRating;
@property (copy, nonatomic, readonly) NSArray *genreNames;
@property (nonatomic, readonly) _Bool hasLyrics;
@property (nonatomic, readonly) _Bool hasTimeSyncedLyrics;
@property (copy, nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) long long movementCount;
@property (copy, nonatomic, readonly) NSString *movementName;
@property (nonatomic, readonly) long long movementNumber;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *offers;
@property (copy, nonatomic, readonly) NSString *playlistGlobalID;
@property (copy, nonatomic, readonly) NSString *radioStationStringID;
@property (copy, nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) _Bool shouldShowComposer;
@property (nonatomic, readonly) long long storeAdamID;
@property (copy, nonatomic, readonly) NSArray *formerStoreAdamIDs;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long trackNumber;
@property (nonatomic, readonly) long long trackCount;
@property (copy, nonatomic, readonly) NSString *workName;
@property (copy, nonatomic, readonly) NSArray *artworkInfos;

+ (id)storeServerCalendar;

- (id)initWithMetadataDictionary:(id)arg1;
- (id)_storePlatformReleaseDateFormatter;
- (id)offerWithType:(id)arg1;
- (id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2;

@end
