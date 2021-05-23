/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsRoutine, NSString;

@protocol MapsSuggestionsMeCardReader;

@interface MapsSuggestionsUser : NSObject <Swift>

{
    struct Queue _queue;
    id <MapsSuggestionsMeCardReader> _meCardReader;
    MapsSuggestionsRoutine *_routine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (id)routine;
- (id)initWithMeCardReader:(id)arg1 routine:(id)arg2;
- (_Bool)meCardForProminentPlacesAroundCoordinate:(struct CLLocationCoordinate2D)arg1 maxDistance:(double)arg2 maxAge:(double)arg3 minVisits:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)meCardReader;

@end
