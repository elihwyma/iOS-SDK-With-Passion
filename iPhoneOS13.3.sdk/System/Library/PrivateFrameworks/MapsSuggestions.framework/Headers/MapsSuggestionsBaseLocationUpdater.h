//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater>
{
    struct Queue _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (NSUInteger)countLocationObservers;
- (void)awaitSync;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)condsiderNewVisit:(id)arg1;
- (void)condsiderNewLocation:(id)arg1;
- (void)stopImplementation;
- (void)startImplemention;
- (BOOL)hasObservers;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSString *uniqueName;

@end

