/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTime, _INPBDateTimeRange, _INPBLocationValue;

@protocol _INPBTrainTrip <Swift>

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

@end
