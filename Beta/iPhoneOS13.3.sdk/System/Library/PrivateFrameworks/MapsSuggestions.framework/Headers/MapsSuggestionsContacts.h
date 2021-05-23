/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class CNContactStore, MapsSuggestionsLimitedDictionary, MapsSuggestionsMeCard, MapsSuggestionsObservers, NSString;

@protocol MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsContacts : NSObject

{
    struct Queue _queue;
    CNContactStore *_store;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    MapsSuggestionsLimitedDictionary *_cache;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currMeCard;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (void)dealloc;
- (id).cxx_construct;
- (void)_receivedNotification:(id)arg1;
- (void)receivedNotification:(id)arg1;
- (_Bool)_reloadWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchMeCardShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (void)_readMeCardAddressStringsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)readMeCardWithHandler:(CDUnknownBlockType)arg1;
- (void)addMeCardObserver:(id)arg1;
- (void)removeMeCardObserver:(id)arg1;
- (id)initWithNetworkRequester:(id)arg1;
- (_Bool)readMeCardAddressStringsWithHandler:(CDUnknownBlockType)arg1;

@end
