/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable

{
    long long _persistentId;
    long long _storeId;
    MIPArtist *_artist;
    NSString *_artworkId;
    NSString *_cloudId;
    NSString *_name;
    int _numDiscs;
    int _numTracks;
    NSString *_sortName;
    int _userRating;
    _Bool _compilation;
    struct {
        unsigned int persistentId:1;
        unsigned int storeId:1;
        unsigned int numDiscs:1;
        unsigned int numTracks:1;
        unsigned int userRating:1;
        unsigned int compilation:1;
    } _has;
}

@property (nonatomic) _Bool hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) _Bool hasNumTracks;
@property (nonatomic) int numTracks;
@property (nonatomic) _Bool hasNumDiscs;
@property (nonatomic) int numDiscs;
@property (nonatomic, readonly) _Bool hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) _Bool hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) _Bool hasCompilation;
@property (nonatomic) _Bool compilation;
@property (nonatomic) _Bool hasPersistentId;
@property (nonatomic) long long persistentId;
@property (nonatomic, readonly) _Bool hasCloudId;
@property (retain, nonatomic) NSString *cloudId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
