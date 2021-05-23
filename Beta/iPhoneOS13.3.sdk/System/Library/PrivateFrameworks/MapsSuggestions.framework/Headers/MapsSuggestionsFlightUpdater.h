/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsFlightUpdater : NSObject

{
    id <MapsSuggestionsFlightRequester> _flightRequester;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue _queue;
}

- (id).cxx_construct;
- (_Bool)_updateGateIfNeededForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_getTerminalMapItemForFlightEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_getGateMapItemForFlightEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateFlightsForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2;
- (_Bool)updateFlightsForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
