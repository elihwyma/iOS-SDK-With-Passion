/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSDate, NSString, PBDataReader, PBUnknownFields;

@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface GEOPDDeparture : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _absDepartureTime;
    double _absLiveDepartureTime;
    GEOFormattedString *_realTimeStatus;
    unsigned long long _referenceTripId;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isCanceled;
    struct {
        unsigned int has_absDepartureTime:1;
        unsigned int has_absLiveDepartureTime:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_isCanceled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_realTimeStatus:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_absDepartureTime:1;
        unsigned int wrote_absLiveDepartureTime:1;
        unsigned int wrote_realTimeStatus:1;
        unsigned int wrote_referenceTripId:1;
        unsigned int wrote_vehicleNumber:1;
        unsigned int wrote_isCanceled:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *departureDate;
@property (nonatomic, readonly) NSDate *scheduledDepartureDate;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readonly) unsigned long long tripIdentifier;
@property (nonatomic, readonly) NSDate *liveDepartureDate;
@property (nonatomic, readonly) long long liveStatus;
@property (nonatomic, readonly) id <GEOServerFormattedString> liveStatusString;
@property (nonatomic, readonly) _Bool isPastDeparture;
@property (nonatomic, readonly) _Bool isCanceled;
@property (nonatomic) _Bool hasAbsDepartureTime;
@property (nonatomic) double absDepartureTime;
@property (nonatomic, readonly) _Bool hasVehicleNumber;
@property (retain, nonatomic) NSString *vehicleNumber;
@property (nonatomic) _Bool hasAbsLiveDepartureTime;
@property (nonatomic) double absLiveDepartureTime;
@property (nonatomic) _Bool hasIsCanceled;
@property (nonatomic) _Bool isCanceled;
@property (nonatomic) _Bool hasReferenceTripId;
@property (nonatomic) unsigned long long referenceTripId;
@property (nonatomic, readonly) _Bool hasRealTimeStatus;
@property (retain, nonatomic) GEOFormattedString *realTimeStatus;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (_Bool)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(_Bool)arg2;
- (void)_readVehicleNumber;
- (void)_readRealTimeStatus;

@end
