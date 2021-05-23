/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOWiFiConnectionSpeedTest : PBCodable

{
    float _avgDL;
    float _avgUL;
    struct {
        unsigned int has_avgDL:1;
        unsigned int has_avgUL:1;
    } _flags;
}

@property (nonatomic) _Bool hasAvgUL;
@property (nonatomic) float avgUL;
@property (nonatomic) _Bool hasAvgDL;
@property (nonatomic) float avgDL;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
