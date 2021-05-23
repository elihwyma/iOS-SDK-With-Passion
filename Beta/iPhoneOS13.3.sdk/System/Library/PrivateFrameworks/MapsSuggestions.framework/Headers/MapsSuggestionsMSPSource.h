/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MSPFavoritesContainer, MSPHistoryContainer, MapsSuggestionsCanKicker, NSObject, NSString;

@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsMSPSource : MapsSuggestionsBaseSource <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _notificationsRegistered;
    MapsSuggestionsCanKicker *_canKickerHistoryNotification;
    MapsSuggestionsCanKicker *_canKickerFavoriteNotification;
    MSPHistoryContainer *_historyContainer;
    MSPFavoritesContainer *_favoritesContainer;
    struct NSMutableArray *_recentsEntriesToAdd;
    struct NSMutableArray *_favoritesEntriesToAdd;
    int _notificationTokenForRecentHistory;
    int _notificationTokenForFavorites;
    _Bool _favoritesEnabled;
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
- (void)_registerNotification;
- (double)updateSuggestionEntries;
- (void)_unregisterNotification;
- (void)_updateRecentHistoryEntries;
- (void)_updateFavoritesEntries;
- (_Bool)_removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_createEntryFromRecentHistoryRoute:(id)arg1;
- (id)_createEntryFromRecentHistoryPlaceDisplay:(id)arg1;
- (struct NSArray *)_mergeRecentsAndFavoritesList;
- (id)_createEntryFromFavoritePlace:(id)arg1;
- (_Bool)_addFieldsToSuggestionsEntry:(id)arg1;
- (id)_extractTitleAndSubtitleFromMapItem:(struct GEOMapItemStorage *)arg1;

@end
