/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateExtension : PBCodable

{
    _Bool _hasRideBookingAppEnabled;
    _Bool _hasRideBookingAppInstalled;
    _Bool _hasTableBookingAppEnabled;
    _Bool _hasTableBookingAppInstalled;
    struct {
        unsigned int has_hasRideBookingAppEnabled:1;
        unsigned int has_hasRideBookingAppInstalled:1;
        unsigned int has_hasTableBookingAppEnabled:1;
        unsigned int has_hasTableBookingAppInstalled:1;
    } _flags;
}

@property (nonatomic) _Bool hasHasRideBookingAppInstalled;
@property (nonatomic) _Bool hasRideBookingAppInstalled;
@property (nonatomic) _Bool hasHasRideBookingAppEnabled;
@property (nonatomic) _Bool hasRideBookingAppEnabled;
@property (nonatomic) _Bool hasHasTableBookingAppInstalled;
@property (nonatomic) _Bool hasTableBookingAppInstalled;
@property (nonatomic) _Bool hasHasTableBookingAppEnabled;
@property (nonatomic) _Bool hasTableBookingAppEnabled;

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
