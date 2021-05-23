/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOETAServiceResponseSummary;

__attribute__((visibility("hidden")))
@interface GEODirectionsResponseExtension : PBCodable

{
    GEOETAServiceResponseSummary *_etaServiceSummary;
}

@property (nonatomic, readonly) _Bool hasEtaServiceSummary;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;

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
