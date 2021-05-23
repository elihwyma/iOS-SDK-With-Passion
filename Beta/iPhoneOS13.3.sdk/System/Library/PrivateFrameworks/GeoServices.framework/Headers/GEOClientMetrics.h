/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    int _offlineReason;
    int _responseSource;
    struct {
        unsigned int has_offlineReason:1;
        unsigned int has_responseSource:1;
    } _flags;
}

@property (nonatomic) _Bool hasResponseSource;
@property (nonatomic) int responseSource;
@property (nonatomic, readonly) _Bool hasNetworkMetrics;
@property (retain, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) _Bool hasOfflineReason;
@property (nonatomic) int offlineReason;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)responseSourceAsString:(int)arg1;
- (int)StringAsResponseSource:(id)arg1;
- (id)offlineReasonAsString:(int)arg1;
- (int)StringAsOfflineReason:(id)arg1;

@end
