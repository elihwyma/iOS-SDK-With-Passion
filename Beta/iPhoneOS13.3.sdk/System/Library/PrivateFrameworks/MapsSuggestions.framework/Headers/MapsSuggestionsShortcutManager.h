/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsContacts, MapsSuggestionsMeCard, MapsSuggestionsObservers, MapsSuggestionsRoutine, NSArray, NSString;

@protocol MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;

@interface MapsSuggestionsShortcutManager : NSObject

{
    struct Queue _queue;
    id <MapsSuggestionsShortcutStorage> _storage;
    id <MapsSuggestionsShortcutSuggestor> _suggestor;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    struct NSMutableArray *_hiddenShortcuts;
    MapsSuggestionsMeCard *_rawMeCard;
    struct NSArray *_shortcutsOverlay;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currCorrectedMeCard;
    NSArray *_rawHomeAddressStrings;
    NSArray *_rawWorkAddressStrings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)storage;
- (id).cxx_construct;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (id)initWithDefaults;
- (id)routine;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (_Bool)readMeCardWithHandler:(CDUnknownBlockType)arg1;
- (void)addMeCardObserver:(id)arg1;
- (void)removeMeCardObserver:(id)arg1;
- (id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4;
- (_Bool)addOrUpdateShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_mergeShortcutsToMeCardAndCallHandler:(CDUnknownBlockType)arg1;
- (_Bool)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)__loadCorrectedMeCardWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_loadCorrectedMeCardWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (struct NSArray *)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(struct NSArray *)arg2;
- (void)test_sortMapsSuggestionsShortcuts:(struct NSMutableArray *)arg1;
- (_Bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(struct NSArray *)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)suggestor;

@end
