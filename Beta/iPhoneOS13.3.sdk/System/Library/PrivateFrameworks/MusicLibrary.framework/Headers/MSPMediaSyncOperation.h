/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable

{
    MIPAlbum *_album;
    MIPArtist *_artist;
    MIPGenre *_genre;
    MIPMediaItem *_mediaItem;
    MIPMultiverseIdentifier *_multiverseId;
    int _operationType;
    MIPPlaylist *_playlist;
    MIPSeries *_series;
    struct {
        unsigned int operationType:1;
    } _has;
}

@property (nonatomic) _Bool hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic, readonly) _Bool hasMultiverseId;
@property (retain, nonatomic) MIPMultiverseIdentifier *multiverseId;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic, readonly) _Bool hasAlbum;
@property (retain, nonatomic) MIPAlbum *album;
@property (nonatomic, readonly) _Bool hasGenre;
@property (retain, nonatomic) MIPGenre *genre;
@property (nonatomic, readonly) _Bool hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (nonatomic, readonly) _Bool hasMediaItem;
@property (retain, nonatomic) MIPMediaItem *mediaItem;
@property (nonatomic, readonly) _Bool hasPlaylist;
@property (retain, nonatomic) MIPPlaylist *playlist;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)operationTypeAsString:(int)arg1;
- (int)StringAsOperationType:(id)arg1;

@end
