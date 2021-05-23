/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTime, _INPBDateTimeRange, _INPBLocationValue;

@interface _INPBTrainTrip : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_arrivalPlatform;
    _INPBLocationValue *_arrivalStationLocation;
    NSString *_departurePlatform;
    _INPBLocationValue *_departureStationLocation;
    _INPBDateTime *_onlineCheckInTime;
    NSString *_provider;
    NSString *_trainName;
    NSString *_trainNumber;
    _INPBDateTimeRange *_tripDuration;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *arrivalPlatform;
@property (nonatomic, readonly) _Bool hasArrivalPlatform;
@property (retain, nonatomic) _INPBLocationValue *arrivalStationLocation;
@property (nonatomic, readonly) _Bool hasArrivalStationLocation;
@property (copy, nonatomic) NSString *departurePlatform;
@property (nonatomic, readonly) _Bool hasDeparturePlatform;
@property (retain, nonatomic) _INPBLocationValue *departureStationLocation;
@property (nonatomic, readonly) _Bool hasDepartureStationLocation;
@property (retain, nonatomic) _INPBDateTime *onlineCheckInTime;
@property (nonatomic, readonly) _Bool hasOnlineCheckInTime;
@property (copy, nonatomic) NSString *provider;
@property (nonatomic, readonly) _Bool hasProvider;
@property (copy, nonatomic) NSString *trainName;
@property (nonatomic, readonly) _Bool hasTrainName;
@property (copy, nonatomic) NSString *trainNumber;
@property (nonatomic, readonly) _Bool hasTrainNumber;
@property (retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property (nonatomic, readonly) _Bool hasTripDuration;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
