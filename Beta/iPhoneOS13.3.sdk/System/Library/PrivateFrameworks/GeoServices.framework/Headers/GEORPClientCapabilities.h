/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPClientCapabilities : PBCodable

{
    int _transitMarketSupport;
    _Bool _hasConstrainedProblemStatusSize;
    _Bool _hasFeatureHandle;
    _Bool _hasNoOptInRequest;
    _Bool _hasSupportForIdsBasedNotifications;
    struct {
        unsigned int has_transitMarketSupport:1;
        unsigned int has_hasConstrainedProblemStatusSize:1;
        unsigned int has_hasFeatureHandle:1;
        unsigned int has_hasNoOptInRequest:1;
        unsigned int has_hasSupportForIdsBasedNotifications:1;
    } _flags;
}

@property (nonatomic) _Bool hasHasConstrainedProblemStatusSize;
@property (nonatomic) _Bool hasConstrainedProblemStatusSize;
@property (nonatomic) _Bool hasHasNoOptInRequest;
@property (nonatomic) _Bool hasNoOptInRequest;
@property (nonatomic) _Bool hasHasFeatureHandle;
@property (nonatomic) _Bool hasFeatureHandle;
@property (nonatomic) _Bool hasHasSupportForIdsBasedNotifications;
@property (nonatomic) _Bool hasSupportForIdsBasedNotifications;
@property (nonatomic) _Bool hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;

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
- (id)transitMarketSupportAsString:(int)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;

@end
