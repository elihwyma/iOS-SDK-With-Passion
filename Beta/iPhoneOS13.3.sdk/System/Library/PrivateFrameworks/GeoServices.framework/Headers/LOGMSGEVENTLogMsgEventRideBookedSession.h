/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusIssue;
    _Bool _bookedUsingMaps;
    _Bool _cancelled;
    _Bool _contactedDriver;
    _Bool _invalidVehicleLocation;
    _Bool _missingVehicleLocation;
    _Bool _tappedProactiveTrayItem;
    _Bool _viewedDetails;
    _Bool _viewedInProactiveTray;
    struct {
        unsigned int has_statusIssue:1;
        unsigned int has_bookedUsingMaps:1;
        unsigned int has_cancelled:1;
        unsigned int has_contactedDriver:1;
        unsigned int has_invalidVehicleLocation:1;
        unsigned int has_missingVehicleLocation:1;
        unsigned int has_tappedProactiveTrayItem:1;
        unsigned int has_viewedDetails:1;
        unsigned int has_viewedInProactiveTray:1;
        unsigned int read_intentResponseFailures:1;
        unsigned int read_rideAppId:1;
        unsigned int read_rideAppVersion:1;
        unsigned int read_rideBookedSessionId:1;
        unsigned int wrote_intentResponseFailures:1;
        unsigned int wrote_rideAppId:1;
        unsigned int wrote_rideAppVersion:1;
        unsigned int wrote_rideBookedSessionId:1;
        unsigned int wrote_statusIssue:1;
        unsigned int wrote_bookedUsingMaps:1;
        unsigned int wrote_cancelled:1;
        unsigned int wrote_contactedDriver:1;
        unsigned int wrote_invalidVehicleLocation:1;
        unsigned int wrote_missingVehicleLocation:1;
        unsigned int wrote_tappedProactiveTrayItem:1;
        unsigned int wrote_viewedDetails:1;
        unsigned int wrote_viewedInProactiveTray:1;
    } _flags;
}

@property (nonatomic) _Bool hasBookedUsingMaps;
@property (nonatomic) _Bool bookedUsingMaps;
@property (nonatomic) _Bool hasCancelled;
@property (nonatomic) _Bool cancelled;
@property (nonatomic) _Bool hasContactedDriver;
@property (nonatomic) _Bool contactedDriver;
@property (nonatomic) _Bool hasViewedInProactiveTray;
@property (nonatomic) _Bool viewedInProactiveTray;
@property (nonatomic) _Bool hasTappedProactiveTrayItem;
@property (nonatomic) _Bool tappedProactiveTrayItem;
@property (nonatomic) _Bool hasViewedDetails;
@property (nonatomic) _Bool viewedDetails;
@property (nonatomic, readonly) _Bool hasRideAppId;
@property (retain, nonatomic) NSString *rideAppId;
@property (nonatomic, readonly) _Bool hasRideBookedSessionId;
@property (retain, nonatomic) NSString *rideBookedSessionId;
@property (nonatomic, readonly) _Bool hasRideAppVersion;
@property (retain, nonatomic) NSString *rideAppVersion;
@property (nonatomic) _Bool hasInvalidVehicleLocation;
@property (nonatomic) _Bool invalidVehicleLocation;
@property (nonatomic) _Bool hasMissingVehicleLocation;
@property (nonatomic) _Bool missingVehicleLocation;
@property (nonatomic) _Bool hasStatusIssue;
@property (nonatomic) int statusIssue;
@property (retain, nonatomic) NSMutableArray *intentResponseFailures;

+ (_Bool)isValid:(id)arg1;
+ (Class)intentResponseFailureType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readRideAppId;
- (void)_readRideBookedSessionId;
- (void)_readRideAppVersion;
- (void)_readIntentResponseFailures;
- (void)_addNoFlagsIntentResponseFailure:(id)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (void)clearIntentResponseFailures;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
- (int)StringAsStatusIssue:(id)arg1;

@end
