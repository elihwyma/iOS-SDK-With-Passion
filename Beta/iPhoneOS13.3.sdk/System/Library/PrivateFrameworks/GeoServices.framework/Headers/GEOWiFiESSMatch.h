/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOWiFiESS;

@interface GEOWiFiESSMatch : PBCodable

{
    GEOWiFiESS *_ess;
    int _status;
    struct {
        unsigned int has_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasEss;
@property (retain, nonatomic) GEOWiFiESS *ess;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
