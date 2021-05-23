/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, RTRoutineManager;

@interface MapsSuggestionsRoutineRequester : NSObject

{
    RTRoutineManager *_routineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (_Bool)startMonitoringVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearAllVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringVehicleEvents;
- (_Bool)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)fetchLocationsOfInterestOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchRoutineModeFromLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
