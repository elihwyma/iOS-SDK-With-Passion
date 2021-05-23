/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider : HFItemProvider

{
    unsigned long long _suggestedRoomLimit;
    HMHome *_home;
    id <HFRoomSuggestionVendor> _suggestionVendor;
    NSSet *_supplementaryRoomBuilders;
    NSSet *_suggestionItems;
}

@property (retain, nonatomic) NSSet *suggestionItems;
@property (nonatomic) unsigned long long suggestedRoomLimit;
@property (nonatomic, readonly) HMHome *home;
@property (retain, nonatomic) id <HFRoomSuggestionVendor> suggestionVendor;
@property (copy, nonatomic) NSSet *supplementaryRoomBuilders;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 suggestionVendor:(id)arg2;
- (id)_filteredSuggestions;
- (id)_filteredSupplementaryRoomBuilders;
- (id)_keyForRoomName:(id)arg1;

@end
