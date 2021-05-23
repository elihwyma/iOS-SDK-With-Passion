/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTouristInfo;

__attribute__((visibility("hidden")))
@interface GEOLogMsgStateMapViewLocation : PBCodable

{
    GEOTouristInfo *_touristInfo;
    int _locationBucket;
    _Bool _isCurrentLocationInViewport;
    struct {
        unsigned int has_locationBucket:1;
        unsigned int has_isCurrentLocationInViewport:1;
    } _flags;
}

@property (nonatomic) _Bool hasLocationBucket;
@property (nonatomic) int locationBucket;
@property (nonatomic) _Bool hasIsCurrentLocationInViewport;
@property (nonatomic) _Bool isCurrentLocationInViewport;
@property (nonatomic, readonly) _Bool hasTouristInfo;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;

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
- (id)locationBucketAsString:(int)arg1;
- (int)StringAsLocationBucket:(id)arg1;

@end
