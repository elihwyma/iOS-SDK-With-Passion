/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPArtist, NSData, NSString;

@interface MIPMovie : PBCodable

{
    long long _rentalDuration;
    long long _rentalPlaybackDuration;
    long long _rentalPlaybackStartedDateTime;
    long long _rentalStartedDateTime;
    MIPArtist *_artist;
    int _audioLanguage;
    int _audioTrackId;
    int _audioTrackIndex;
    NSString *_extendedContentName;
    NSData *_flattenedChapterData;
    NSString *_movieInfo;
    int _subtitleLanguage;
    int _subtitleTrackIndex;
    int _videoQuality;
    _Bool _hasAlternateAudio;
    _Bool _hasChapterData;
    _Bool _hasSubtitles;
    _Bool _rental;
    struct {
        unsigned int rentalDuration:1;
        unsigned int rentalPlaybackDuration:1;
        unsigned int rentalPlaybackStartedDateTime:1;
        unsigned int rentalStartedDateTime:1;
        unsigned int audioLanguage:1;
        unsigned int audioTrackId:1;
        unsigned int audioTrackIndex:1;
        unsigned int subtitleLanguage:1;
        unsigned int subtitleTrackIndex:1;
        unsigned int videoQuality:1;
        unsigned int hasAlternateAudio:1;
        unsigned int hasChapterData:1;
        unsigned int hasSubtitles:1;
        unsigned int rental:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) _Bool hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (nonatomic) _Bool hasRental;
@property (nonatomic) _Bool rental;
@property (nonatomic) _Bool hasHasChapterData;
@property (nonatomic) _Bool hasChapterData;
@property (nonatomic, readonly) _Bool hasExtendedContentName;
@property (retain, nonatomic) NSString *extendedContentName;
@property (nonatomic, readonly) _Bool hasMovieInfo;
@property (retain, nonatomic) NSString *movieInfo;
@property (nonatomic) _Bool hasHasAlternateAudio;
@property (nonatomic) _Bool hasAlternateAudio;
@property (nonatomic) _Bool hasHasSubtitles;
@property (nonatomic) _Bool hasSubtitles;
@property (nonatomic) _Bool hasAudioLanguage;
@property (nonatomic) int audioLanguage;
@property (nonatomic) _Bool hasAudioTrackIndex;
@property (nonatomic) int audioTrackIndex;
@property (nonatomic) _Bool hasAudioTrackId;
@property (nonatomic) int audioTrackId;
@property (nonatomic) _Bool hasSubtitleLanguage;
@property (nonatomic) int subtitleLanguage;
@property (nonatomic) _Bool hasSubtitleTrackIndex;
@property (nonatomic) int subtitleTrackIndex;
@property (nonatomic) _Bool hasRentalDuration;
@property (nonatomic) long long rentalDuration;
@property (nonatomic) _Bool hasRentalPlaybackDuration;
@property (nonatomic) long long rentalPlaybackDuration;
@property (nonatomic) _Bool hasRentalPlaybackStartedDateTime;
@property (nonatomic) long long rentalPlaybackStartedDateTime;
@property (nonatomic) _Bool hasRentalStartedDateTime;
@property (nonatomic) long long rentalStartedDateTime;
@property (nonatomic, readonly) _Bool hasFlattenedChapterData;
@property (retain, nonatomic) NSData *flattenedChapterData;

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
