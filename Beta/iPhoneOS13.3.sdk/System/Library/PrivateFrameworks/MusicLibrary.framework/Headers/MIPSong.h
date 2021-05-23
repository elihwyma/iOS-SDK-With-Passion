/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPPlaybackInfo, NSString;

@interface MIPSong : PBCodable

{
    long long _geniusId;
    MIPAlbum *_album;
    MIPArtist *_artist;
    int _audioFormat;
    MIPArtist *_composer;
    int _discNumber;
    MIPGenre *_genre;
    NSString *_hlsPlaylistURL;
    NSString *_lyrics;
    int _lyricsChecksum;
    MIPPlaybackInfo *_playbackInfo;
    int _trackNumber;
    int _userRating;
    _Bool _excludeFromShuffle;
    _Bool _hasVideo;
    struct {
        unsigned int geniusId:1;
        unsigned int audioFormat:1;
        unsigned int discNumber:1;
        unsigned int lyricsChecksum:1;
        unsigned int trackNumber:1;
        unsigned int userRating:1;
        unsigned int excludeFromShuffle:1;
        unsigned int hasVideo:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAlbum;
@property (retain, nonatomic) MIPAlbum *album;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic, readonly) _Bool hasComposer;
@property (retain, nonatomic) MIPArtist *composer;
@property (nonatomic, readonly) _Bool hasGenre;
@property (retain, nonatomic) MIPGenre *genre;
@property (nonatomic) _Bool hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) _Bool hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (nonatomic) _Bool hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) _Bool hasExcludeFromShuffle;
@property (nonatomic) _Bool excludeFromShuffle;
@property (nonatomic) _Bool hasGeniusId;
@property (nonatomic) long long geniusId;
@property (nonatomic) _Bool hasAudioFormat;
@property (nonatomic) int audioFormat;
@property (nonatomic) _Bool hasHasVideo;
@property (nonatomic) _Bool hasVideo;
@property (nonatomic, readonly) _Bool hasLyrics;
@property (retain, nonatomic) NSString *lyrics;
@property (nonatomic, readonly) _Bool hasPlaybackInfo;
@property (retain, nonatomic) MIPPlaybackInfo *playbackInfo;
@property (nonatomic) _Bool hasLyricsChecksum;
@property (nonatomic) int lyricsChecksum;
@property (nonatomic, readonly) _Bool hasHlsPlaylistURL;
@property (retain, nonatomic) NSString *hlsPlaylistURL;

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
