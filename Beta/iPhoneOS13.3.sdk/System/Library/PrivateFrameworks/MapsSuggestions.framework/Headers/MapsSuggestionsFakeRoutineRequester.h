/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeRoutineRequester : NSObject

{
    NSMutableDictionary *_fakeData;
    _Bool _breakCallbackPromise;
    unsigned long long _calledFetchNextPLOIs;
    unsigned long long _calledFetchLocationOfInterestWithIdentifier;
    unsigned long long _calledFetchLocationsOfInterestOfType;
    unsigned long long _calledFetchLocationsOfInterestVisitedSinceDate;
    unsigned long long _calledFetchRoutineModeFromLocation;
    unsigned long long _calledAddLocationOfInterest;
    unsigned long long _calledUpdateLocationOfInterest;
    unsigned long long _calledStartMonitoringVehicleEvents;
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
- (void)configureError:(id)arg1;
- (void)configureLOIs:(id)arg1 forType:(long long)arg2;
- (void)configureLOIs:(id)arg1 sinceDate:(id)arg2;
- (void)configureLOI:(id)arg1 forIdentifier:(id)arg2;
- (void)configureBrokenCallBackPromise:(_Bool)arg1;
- (unsigned long long)calledFetchNextPLOIs;
- (unsigned long long)calledFetchLocationOfInterestWithIdentifier;
- (unsigned long long)calledFetchLocationsOfInterestOfType;
- (unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
- (unsigned long long)calledFetchRoutineModeFromLocation;
- (unsigned long long)calledAddLocationOfInterest;
- (unsigned long long)calledUpdateLocationOfInterest;
- (unsigned long long)calledStartMonitoringVehicleEvents;

@end
