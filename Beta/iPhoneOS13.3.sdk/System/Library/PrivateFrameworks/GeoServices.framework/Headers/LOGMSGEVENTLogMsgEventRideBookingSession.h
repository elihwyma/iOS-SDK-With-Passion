/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable

{
    PBDataReader *_reader;
    GEOLatLng *_destinationBlurred;
    double _distanceToPickupInMeters;
    double _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSMutableArray *_intentResponseFailures;
    GEOLatLng *_originBlurred;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookingSessionId;
    NSString *_rideType;
    long long _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _endState;
    int _endView;
    unsigned int _numberOfAvailableExtensions;
    int _statusIssue;
    _Bool _comparedRideOptions;
    _Bool _exploredOtherOptions;
    _Bool _installedApp;
    _Bool _movedPickupLocation;
    _Bool _paymentIsApplePay;
    _Bool _showedSurgePricingAlert;
    _Bool _switchedApp;
    _Bool _unavailable;
    struct {
        unsigned int has_distanceToPickupInMeters:1;
        unsigned int has_durationOfSessionInSeconds:1;
        unsigned int has_timestamp:1;
        unsigned int has_endState:1;
        unsigned int has_endView:1;
        unsigned int has_numberOfAvailableExtensions:1;
        unsigned int has_statusIssue:1;
        unsigned int has_comparedRideOptions:1;
        unsigned int has_exploredOtherOptions:1;
        unsigned int has_installedApp:1;
        unsigned int has_movedPickupLocation:1;
        unsigned int has_paymentIsApplePay:1;
        unsigned int has_showedSurgePricingAlert:1;
        unsigned int has_switchedApp:1;
        unsigned int has_unavailable:1;
        unsigned int read_destinationBlurred:1;
        unsigned int read_errorMessages:1;
        unsigned int read_intentResponseFailures:1;
        unsigned int read_originBlurred:1;
        unsigned int read_rideAppId:1;
        unsigned int read_rideAppVersion:1;
        unsigned int read_rideBookingSessionId:1;
        unsigned int read_rideType:1;
        unsigned int wrote_destinationBlurred:1;
        unsigned int wrote_distanceToPickupInMeters:1;
        unsigned int wrote_durationOfSessionInSeconds:1;
        unsigned int wrote_errorMessages:1;
        unsigned int wrote_intentResponseFailures:1;
        unsigned int wrote_originBlurred:1;
        unsigned int wrote_rideAppId:1;
        unsigned int wrote_rideAppVersion:1;
        unsigned int wrote_rideBookingSessionId:1;
        unsigned int wrote_rideType:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_endState:1;
        unsigned int wrote_endView:1;
        unsigned int wrote_numberOfAvailableExtensions:1;
        unsigned int wrote_statusIssue:1;
        unsigned int wrote_comparedRideOptions:1;
        unsigned int wrote_exploredOtherOptions:1;
        unsigned int wrote_installedApp:1;
        unsigned int wrote_movedPickupLocation:1;
        unsigned int wrote_paymentIsApplePay:1;
        unsigned int wrote_showedSurgePricingAlert:1;
        unsigned int wrote_switchedApp:1;
        unsigned int wrote_unavailable:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasRideBookingSessionId;
@property (retain, nonatomic) NSString *rideBookingSessionId;
@property (nonatomic) _Bool hasEndState;
@property (nonatomic) int endState;
@property (nonatomic) _Bool hasEndView;
@property (nonatomic) int endView;
@property (nonatomic, readonly) _Bool hasRideAppId;
@property (retain, nonatomic) NSString *rideAppId;
@property (nonatomic, readonly) _Bool hasOriginBlurred;
@property (retain, nonatomic) GEOLatLng *originBlurred;
@property (nonatomic, readonly) _Bool hasDestinationBlurred;
@property (retain, nonatomic) GEOLatLng *destinationBlurred;
@property (nonatomic) _Bool hasExploredOtherOptions;
@property (nonatomic) _Bool exploredOtherOptions;
@property (nonatomic, readonly) _Bool hasRideType;
@property (retain, nonatomic) NSString *rideType;
@property (nonatomic) _Bool hasDistanceToPickupInMeters;
@property (nonatomic) double distanceToPickupInMeters;
@property (nonatomic) _Bool hasPaymentIsApplePay;
@property (nonatomic) _Bool paymentIsApplePay;
@property (nonatomic) _Bool hasNumberOfAvailableExtensions;
@property (nonatomic) unsigned int numberOfAvailableExtensions;
@property (nonatomic) _Bool hasSwitchedApp;
@property (nonatomic) _Bool switchedApp;
@property (nonatomic) _Bool hasShowedSurgePricingAlert;
@property (nonatomic) _Bool showedSurgePricingAlert;
@property (nonatomic) _Bool hasDurationOfSessionInSeconds;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) _Bool hasInstalledApp;
@property (nonatomic) _Bool installedApp;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) _Bool hasUnavailable;
@property (nonatomic) _Bool unavailable;
@property (nonatomic) _Bool hasMovedPickupLocation;
@property (nonatomic) _Bool movedPickupLocation;
@property (retain, nonatomic) NSMutableArray *errorMessages;
@property (nonatomic, readonly) _Bool hasRideAppVersion;
@property (retain, nonatomic) NSString *rideAppVersion;
@property (nonatomic) _Bool hasComparedRideOptions;
@property (nonatomic) _Bool comparedRideOptions;
@property (nonatomic) _Bool hasStatusIssue;
@property (nonatomic) int statusIssue;
@property (retain, nonatomic) NSMutableArray *intentResponseFailures;

+ (_Bool)isValid:(id)arg1;
+ (Class)intentResponseFailureType;
+ (Class)errorMessageType;

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
- (void)_readRideAppVersion;
- (void)_readIntentResponseFailures;
- (void)_addNoFlagsIntentResponseFailure:(id)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (void)clearIntentResponseFailures;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
- (int)StringAsStatusIssue:(id)arg1;
- (void)_readRideBookingSessionId;
- (void)_readOriginBlurred;
- (void)_readDestinationBlurred;
- (void)_readRideType;
- (void)_readErrorMessages;
- (void)_addNoFlagsErrorMessage:(id)arg1;
- (unsigned long long)errorMessagesCount;
- (void)clearErrorMessages;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (void)addErrorMessage:(id)arg1;
- (id)endStateAsString:(int)arg1;
- (int)StringAsEndState:(id)arg1;
- (id)endViewAsString:(int)arg1;
- (int)StringAsEndView:(id)arg1;

@end
