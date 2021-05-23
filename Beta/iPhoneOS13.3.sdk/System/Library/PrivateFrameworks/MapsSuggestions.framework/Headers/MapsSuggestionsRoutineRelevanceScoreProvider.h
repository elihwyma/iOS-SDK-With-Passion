/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsRoutine, NSDate, NSString;

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject

{
    NSDate *_fetchEntriesFromDate;
    struct Queue _queue;
    MapsSuggestionsRoutine *_routine;
    struct NSArray *_routineLocations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (id)initWithRoutine:(id)arg1;
- (id)_confidencesForMapItems:(id)arg1;
- (_Bool)_fetchLOIsWithCallback:(CDUnknownBlockType)arg1;
- (id)_confidencesForMapItem:(id)arg1;
- (_Bool)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preLoad;

@end
