/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface ICStoreFinanceItemMetadata : NSObject <Swift>

{
    NSDictionary *_metadataDictionary;
    NSNumber *_playlistID;
}

@property (copy, nonatomic, readonly) NSDictionary *metadataDictionary;
@property (copy, nonatomic, readonly) NSNumber *itemAdamID;
@property (copy, nonatomic, readonly) NSNumber *itemCloudID;
@property (copy, nonatomic, readonly) NSString *itemName;
@property (copy, nonatomic, readonly) NSString *itemSortName;
@property (copy, nonatomic, readonly) NSString *artistName;
@property (copy, nonatomic, readonly) NSString *artistSortName;
@property (copy, nonatomic, readonly) NSNumber *artistID;
@property (copy, nonatomic, readonly) NSString *playlistName;
@property (copy, nonatomic, readonly) NSString *albumSortName;
@property (copy, nonatomic, readonly) NSString *playlistArtistName;
@property (copy, nonatomic, readonly) NSString *composerName;
@property (copy, nonatomic, readonly) NSString *composerSortName;
@property (copy, nonatomic, readonly) NSString *genre;
@property (copy, nonatomic, readonly) NSNumber *genreID;
@property (copy, nonatomic, readonly) NSNumber *playlistID;
@property (copy, nonatomic, readonly) NSNumber *discCount;
@property (copy, nonatomic, readonly) NSNumber *discNumber;
@property (copy, nonatomic, readonly) NSNumber *trackCount;
@property (copy, nonatomic, readonly) NSNumber *trackNumber;
@property (copy, nonatomic, readonly) NSNumber *duration;
@property (copy, nonatomic, readonly) NSNumber *isExplicit;
@property (copy, nonatomic, readonly) NSNumber *year;
@property (copy, nonatomic, readonly) NSNumber *bitrate;
@property (copy, nonatomic, readonly) NSString *comments;
@property (copy, nonatomic, readonly) NSDate *dateAdded;
@property (copy, nonatomic, readonly) NSNumber *drmVersionNumber;
@property (copy, nonatomic, readonly) NSString *fileExtension;
@property (copy, nonatomic, readonly) NSNumber *isGapless;
@property (copy, nonatomic, readonly) NSNumber *isMasteredForITunes;
@property (copy, nonatomic, readonly) NSString *kind;
@property (copy, nonatomic, readonly) NSNumber *sampleRate;
@property (copy, nonatomic, readonly) NSNumber *versionRestrictions;
@property (copy, nonatomic, readonly) NSString *xid;
@property (copy, nonatomic, readonly) NSNumber *isCompilation;
@property (copy, nonatomic, readonly) NSString *copyright;
@property (copy, nonatomic, readonly) NSNumber *rank;
@property (copy, nonatomic, readonly) NSDate *releaseDate;
@property (copy, nonatomic, readonly) NSNumber *storefrontID;
@property (copy, nonatomic, readonly) NSNumber *vendorID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)albumID;

@end
