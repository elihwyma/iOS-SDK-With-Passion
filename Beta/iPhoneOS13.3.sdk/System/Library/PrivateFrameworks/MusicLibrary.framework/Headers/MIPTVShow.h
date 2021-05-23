/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPArtist, MIPSeries, NSString;

@interface MIPTVShow : PBCodable

{
    MIPArtist *_artist;
    NSString *_episodeId;
    NSString *_episodeSortId;
    NSString *_networkName;
    int _seasonNumber;
    MIPSeries *_series;
    int _videoQuality;
    struct {
        unsigned int seasonNumber:1;
        unsigned int videoQuality:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic, readonly) _Bool hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (nonatomic) _Bool hasSeasonNumber;
@property (nonatomic) int seasonNumber;
@property (nonatomic, readonly) _Bool hasEpisodeId;
@property (retain, nonatomic) NSString *episodeId;
@property (nonatomic, readonly) _Bool hasEpisodeSortId;
@property (retain, nonatomic) NSString *episodeSortId;
@property (nonatomic) _Bool hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (nonatomic, readonly) _Bool hasNetworkName;
@property (retain, nonatomic) NSString *networkName;

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
