/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject

{
    struct Queue _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)dealloc;
- (_Bool)hasObservers;
- (id).cxx_construct;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (void)startImplemention;
- (void)stopImplementation;
- (void)condsiderNewLocation:(id)arg1;
- (void)condsiderNewVisit:(id)arg1;
- (void)awaitSync;
- (unsigned long long)countLocationObservers;

@end
