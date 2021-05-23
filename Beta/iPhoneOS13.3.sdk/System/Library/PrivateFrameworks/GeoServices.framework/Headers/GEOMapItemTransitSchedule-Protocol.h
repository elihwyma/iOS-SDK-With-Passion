/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol GEOMapItemTransitSchedule <Swift>

@property (nonatomic, readonly) NSArray *departureSequences;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDate *lastFullScheduleValidDate;

- (unsigned short)departureSequencesForSystem:excludingIncidentEntities:direction:validForDateFromBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)numAdditionalDeparturesForSequence: /* Error: Ran out of types for this method. */;
- (unsigned short)directionsForSystem:excludingIncidentEntities:validForDateFromBlock:hasSequencesWithNoDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)serviceResumesDateForLine:excludingIncidentEntities:afterDate:blocked: /* Error: Ran out of types for this method. */;
- (unsigned short)inactiveLinesForSystem:relativeToDateFromBlock:excludingIncidentEntities: /* Error: Ran out of types for this method. */;
- (unsigned short)allSequencesForSystem:direction: /* Error: Ran out of types for this method. */;
- (unsigned short)headSignsForLine: /* Error: Ran out of types for this method. */;

@end
