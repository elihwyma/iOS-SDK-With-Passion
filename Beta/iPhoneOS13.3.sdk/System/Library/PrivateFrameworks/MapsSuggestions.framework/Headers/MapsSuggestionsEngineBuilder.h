/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsContacts, MapsSuggestionsRoutine, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol MapsSuggestionsLocationUpdater, MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineRequester, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor, MapsSuggestionsStrategy;

@interface MapsSuggestionsEngineBuilder : NSObject <Swift>

{
    _Bool _hasTracker;
    id <MapsSuggestionsStrategy> _strategy;
    long long _managerStyle;
    id <MapsSuggestionsLocationUpdater> _locationUpdater;
    NSMutableArray *_sourceClasses;
    struct NSMutableSet *_includePreFilters;
    struct NSMutableSet *_includePostFilters;
    struct NSMutableArray *_includeImprovers;
    struct NSMutableArray *_includeDedupers;
    struct NSMutableSet *_excludePreFilters;
    struct NSMutableSet *_excludePostFilters;
    struct NSMutableArray *_excludeImprovers;
    struct NSMutableArray *_excludeDedupers;
    struct NSMutableDictionary *_titleFormatters;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    id <MapsSuggestionsRoutineRequester> _routineRequester;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    id <MapsSuggestionsShortcutStorage> _shortcutStorage;
    id <MapsSuggestionsShortcutSuggestor> _shortcutSuggestor;
}

@property (retain, nonatomic) id <MapsSuggestionsStrategy> strategy;
@property (nonatomic) long long managerStyle;
@property (retain, nonatomic) id <MapsSuggestionsLocationUpdater> locationUpdater;
@property (nonatomic) _Bool hasTracker;
@property (retain, nonatomic) NSMutableArray *sourceClasses;
@property (retain, nonatomic) NSMutableSet *includePreFilters;
@property (retain, nonatomic) NSMutableSet *includePostFilters;
@property (retain, nonatomic) NSMutableArray *includeImprovers;
@property (retain, nonatomic) NSMutableArray *includeDedupers;
@property (retain, nonatomic) NSMutableSet *excludePreFilters;
@property (retain, nonatomic) NSMutableSet *excludePostFilters;
@property (retain, nonatomic) NSMutableArray *excludeImprovers;
@property (retain, nonatomic) NSMutableArray *excludeDedupers;
@property (retain, nonatomic) NSMutableDictionary *titleFormatters;
@property (retain, nonatomic) id <MapsSuggestionsNetworkRequester> networkRequester;
@property (retain, nonatomic) id <MapsSuggestionsRoutineRequester> routineRequester;
@property (retain, nonatomic) MapsSuggestionsRoutine *routine;
@property (retain, nonatomic) MapsSuggestionsContacts *contacts;
@property (retain, nonatomic) id <MapsSuggestionsShortcutStorage> shortcutStorage;
@property (retain, nonatomic) id <MapsSuggestionsShortcutSuggestor> shortcutSuggestor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)forDevice;
+ (id)forTests;
+ (id)currentEngine;
+ (id)_forPhone;
+ (id)forEveryone;
+ (id)simpleStrategy;
+ (id)forSimulator;

- (id)init;
- (id)build;
- (id)buildWithoutStoring;
- (id)withLocationUpdater:(id)arg1;
- (id)withoutTracker;
- (id)withFavorites;
- (id)withPreFilters:(struct NSSet *)arg1;
- (id)withPostFilters:(struct NSSet *)arg1;
- (id)withImprovers:(id)arg1;
- (id)withoutImprovers:(id)arg1;
- (id)withDedupers:(id)arg1;
- (id)withoutDedupers:(id)arg1;
- (id)withSourceClasses:(id)arg1;
- (id)withTitleFormatter:(id)arg1 forType:(long long)arg2;
- (id)withManagerStyle:(long long)arg1;

@end
