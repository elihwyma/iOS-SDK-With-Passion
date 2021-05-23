/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFItem, HMHome, NSSet;

@protocol HFServiceLikeItem;

@interface HFActionSetSuggestionItemProvider : HFItemProvider

{
    _Bool _includeExistingActionSets;
    _Bool _includeCustomActionSets;
    _Bool _persistAddedSuggestions;
    _Bool _hasProvidedStaticSuggestionItems;
    HMHome *_home;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    NSSet *_staticSuggestionItems;
    NSSet *_customSuggestionItems;
}

@property (retain, nonatomic) NSSet *staticSuggestionItems;
@property (retain, nonatomic) NSSet *customSuggestionItems;
@property (nonatomic) _Bool hasProvidedStaticSuggestionItems;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) _Bool includeExistingActionSets;
@property (nonatomic) _Bool includeCustomActionSets;
@property (nonatomic) _Bool persistAddedSuggestions;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)_builtInActionSetOfType:(id)arg1;

@end
