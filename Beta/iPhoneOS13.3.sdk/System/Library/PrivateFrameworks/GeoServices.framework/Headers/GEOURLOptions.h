/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOURLCamera, GEOURLCenterSpan, GEOURLRouteHandle, GEOURLTimePoint, NSString, PBDataReader;

@interface GEOURLOptions : PBCodable

{
    PBDataReader *_reader;
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    GEOURLTimePoint *_timePoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _mapType;
    int _transportType;
    int _userTrackingMode;
    _Bool _connectedToCar;
    _Bool _enableTraffic;
    struct {
        unsigned int has_mapType:1;
        unsigned int has_transportType:1;
        unsigned int has_userTrackingMode:1;
        unsigned int has_connectedToCar:1;
        unsigned int has_enableTraffic:1;
        unsigned int read_camera:1;
        unsigned int read_centerSpan:1;
        unsigned int read_referralIdentifier:1;
        unsigned int read_routeHandle:1;
        unsigned int read_timePoint:1;
        unsigned int wrote_camera:1;
        unsigned int wrote_centerSpan:1;
        unsigned int wrote_referralIdentifier:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_timePoint:1;
        unsigned int wrote_mapType:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_userTrackingMode:1;
        unsigned int wrote_connectedToCar:1;
        unsigned int wrote_enableTraffic:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasEnableTraffic;
@property (nonatomic) _Bool enableTraffic;
@property (nonatomic) _Bool hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) _Bool hasCenterSpan;
@property (retain, nonatomic) GEOURLCenterSpan *centerSpan;
@property (nonatomic, readonly) _Bool hasCamera;
@property (retain, nonatomic) GEOURLCamera *camera;
@property (nonatomic, readonly) _Bool hasReferralIdentifier;
@property (retain, nonatomic) NSString *referralIdentifier;
@property (nonatomic) _Bool hasUserTrackingMode;
@property (nonatomic) int userTrackingMode;
@property (nonatomic, readonly) _Bool hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (nonatomic, readonly) _Bool hasTimePoint;
@property (retain, nonatomic) GEOURLTimePoint *timePoint;
@property (nonatomic) _Bool hasConnectedToCar;
@property (nonatomic) _Bool connectedToCar;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readRouteHandle;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;
- (id)mapTypeAsString:(int)arg1;
- (int)StringAsMapType:(id)arg1;
- (void)_readCenterSpan;
- (void)_readCamera;
- (void)_readReferralIdentifier;
- (void)_readTimePoint;
- (id)userTrackingModeAsString:(int)arg1;
- (int)StringAsUserTrackingMode:(id)arg1;

@end
