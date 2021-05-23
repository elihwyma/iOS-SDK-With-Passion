/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSSet, NSString;

@protocol GEOTransitLine;

@protocol GEOTransitDepartureSequence <Swift>

@property (nonatomic, readonly) id <GEOTransitLine> line;
@property (nonatomic, readonly) _Bool isLowFrequency;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSString *headsign;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) NSSet *nextStopIDs;

- (unsigned short)departures;
- (unsigned short)stopId;
- (unsigned short)operatingHoursForDate:inTimeZone: /* Error: Ran out of types for this method. */;
- (unsigned short)firstDepartureValidForDate: /* Error: Ran out of types for this method. */;
- (unsigned short)hasFrequencyAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)firstDepartureOnOrAfterDate: /* Error: Ran out of types for this method. */;
- (unsigned short)firstDepartureAfterDate: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfDeparturesAfterDate: /* Error: Ran out of types for this method. */;
- (unsigned short)firstDepartureFrequencyOnOrAfterDate: /* Error: Ran out of types for this method. */;
- (unsigned short)firstOpenOperatingDateOnOrAfterDate: /* Error: Ran out of types for this method. */;
- (unsigned short)isValidForDate:inTimeZone: /* Error: Ran out of types for this method. */;
- (unsigned short)departuresValidForDate: /* Error: Ran out of types for this method. */;
- (unsigned short)frequencyForSortingAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)frequencyToDescribeAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)isDepartureDateInactive:withReferenceDate: /* Error: Ran out of types for this method. */;

@end
