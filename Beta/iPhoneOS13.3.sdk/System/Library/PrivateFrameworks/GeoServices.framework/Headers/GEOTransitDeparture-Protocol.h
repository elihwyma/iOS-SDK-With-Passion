/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol GEOServerFormattedString;

@protocol GEOTransitDeparture <Swift>

@property (nonatomic, readonly) NSDate *departureDate;
@property (nonatomic, readonly) NSDate *scheduledDepartureDate;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readonly) unsigned long long tripIdentifier;
@property (nonatomic, readonly) NSDate *liveDepartureDate;
@property (nonatomic, readonly) long long liveStatus;
@property (nonatomic, readonly) id <GEOServerFormattedString> liveStatusString;
@property (nonatomic, readonly) _Bool isPastDeparture;
@property (nonatomic, readonly) _Bool isCanceled;

- (unsigned short)isPastDepartureRelativeToDate:usingGracePeriod: /* Error: Ran out of types for this method. */;

@end
