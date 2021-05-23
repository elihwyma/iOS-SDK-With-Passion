/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsCanKicker, MapsSuggestionsShortcutManager, NSObject, NSString;

@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsCanKicker *_updateForcer;
    MapsSuggestionsShortcutManager *_shortcutManager;
}

@property (retain, nonatomic) MapsSuggestionsShortcutManager *shortcutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (_Bool)isEnabled;
+ (unsigned long long)disposition;

- (void)stop;
- (void)start;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (id)initWithDelegate:(id)arg1 name:(struct NSString *)arg2;
- (void)_updateSuggestionEntries;
- (void)_renameDuplicateMeCardTypes:(struct NSArray *)arg1;
- (void)_treatShortcuts:(struct NSArray *)arg1 error:(id)arg2;

@end
