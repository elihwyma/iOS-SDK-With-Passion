/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsRoutine, NSString;

@interface MapsSuggestionsRoutineShortcutSuggestor : NSObject

{
    MapsSuggestionsRoutine *_routine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)suggestShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithRoutine:(id)arg1;

@end
