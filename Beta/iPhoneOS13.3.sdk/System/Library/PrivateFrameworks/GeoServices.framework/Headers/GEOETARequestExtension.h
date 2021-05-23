/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTFTrafficSnapshot;

__attribute__((visibility("hidden")))
@interface GEOETARequestExtension : PBCodable

{
    GEOTFTrafficSnapshot *_trafficSnapshot;
    _Bool _needServerLatency;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int has_needServerLatency:1;
        unsigned int has_useLiveTrafficAsFallback:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTrafficSnapshot;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property (nonatomic) _Bool useLiveTrafficAsFallback;
@property (nonatomic) _Bool hasNeedServerLatency;
@property (nonatomic) _Bool needServerLatency;

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
