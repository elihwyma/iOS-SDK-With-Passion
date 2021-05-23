/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsRoutine, NSObject, NSString;

@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <Swift>

{
    MapsSuggestionsRoutine *_routine;
    struct NSArray *_previouslyAddedEntries;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _running;
    NSObject<OS_dispatch_source> *_updateTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (_Bool)isEnabled;
+ (unsigned long long)disposition;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (_Bool)suggestionsEntriesAtLocation:(id)arg1 period:(struct NSDateInterval *)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateSuggestionEntries;
- (void)_requestTouristInfoFromRoutineIfNeededForLocation:(id)arg1;
- (void)_startMonitoringVehicleEvents;

@end
