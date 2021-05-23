/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/Swift-Protocol.h>

@protocol MapsSuggestionsRoutineRequester <Swift>

- (unsigned short)startMonitoringVehicleEventsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAllVehicleEventsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMonitoringVehicleEvents;
- (unsigned short)fetchNextPLOIsFromLocation:startDate:timeInterval:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocationsOfInterestOfType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocationsOfInterestVisitedSinceDate:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocationOfInterestWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRoutineModeFromLocation:handler: /* Error: Ran out of types for this method. */;

@end
