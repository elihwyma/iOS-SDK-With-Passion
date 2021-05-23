/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLVisit, MapsSuggestionsObservers, NSString;

@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject

{
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _queue;
    id <MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;
    CLLocation *_latestLocation;
    CLVisit *_currentVisit;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
    double _distanceBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)_isDefinitelyOutsideOfVisit:(id)arg1 location:(id)arg2 allowingBuffer:(double)arg3;

- (void)dealloc;
- (id).cxx_construct;
- (void)updateLocation:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (void)visitEntered:(id)arg1;
- (void)visitLeft:(id)arg1;
- (id)initDecoratingLocationUpdater:(id)arg1;

@end
