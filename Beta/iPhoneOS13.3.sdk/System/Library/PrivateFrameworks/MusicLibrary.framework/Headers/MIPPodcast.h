/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPArtist, MIPSeries, NSString;

@interface MIPPodcast : PBCodable

{
    MIPArtist *_artist;
    NSString *_externalGuid;
    NSString *_feedUrl;
    MIPSeries *_series;
}

@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic, readonly) _Bool hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (nonatomic, readonly) _Bool hasExternalGuid;
@property (retain, nonatomic) NSString *externalGuid;
@property (nonatomic, readonly) _Bool hasFeedUrl;
@property (retain, nonatomic) NSString *feedUrl;

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
