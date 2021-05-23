/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsSuppressor, NSMutableDictionary, NSObject, NSString;

@protocol MapsSuggestionsSourceDelegate, OS_dispatch_source;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <Swift>

{
    struct NSMutableSet *_sources;
    NSMutableDictionary *_nextUpdateTimes;
    struct Queue _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
    _Bool _running;
}

@property _Bool running;
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
- (id).cxx_construct;
- (id)initWithDelegate:(id)arg1;
- (struct NSSet *)children;
- (double)updateSuggestionEntriesOfType:(long long)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (_Bool)attachSource:(id)arg1;
- (_Bool)detachSource:(id)arg1;
- (double)updateSuggestionEntries;
- (void)_updateChildSourcesForceAll:(_Bool)arg1;
- (void)_initUpdateTimerIfNecessary;
- (double)_updateChildSource:(id)arg1;
- (void)_scheduleNextUpdateChildSourcesWithin:(double)arg1;
- (_Bool)_shouldUpdateSource:(id)arg1;
- (void)_stopUpdateChildSources;
- (void)_startUpdateChildSources;
- (void)_updateChildSourcesForType:(long long)arg1;
- (double)_suppressionTimeForEntry:(id)arg1 snoozeOnly:(_Bool)arg2;
- (_Bool)addChildSource:(id)arg1;
- (_Bool)removeChildSource:(id)arg1;
- (id)test_dateUntilSuppressedEntry:(id)arg1;
- (void)test_sync;
- (double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2;
- (void)test_resetSuppressions;

@end
