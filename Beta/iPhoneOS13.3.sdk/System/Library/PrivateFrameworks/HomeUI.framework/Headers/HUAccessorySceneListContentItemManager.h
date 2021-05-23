/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridItemManager.h>

@class HFItem, NSMutableDictionary;

@protocol HFServiceLikeItem;

@interface HUAccessorySceneListContentItemManager : HUServiceGridItemManager

{
    _Bool _persistAddedSuggestions;
    unsigned long long _contentSource;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    NSMutableDictionary *_committedActionBuildersByActionSetID;
}

@property (nonatomic, readonly) NSMutableDictionary *committedActionBuildersByActionSetID;
@property (nonatomic, readonly) unsigned long long contentSource;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) _Bool persistAddedSuggestions;

+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;
+ (id)createItemProviderForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 persistAddedSuggestions:(_Bool)arg4;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2;
- (id)suggestionItemProvider;
- (id)initWithDelegate:(id)arg1 contentSource:(unsigned long long)arg2 serviceLikeItem:(id)arg3;
- (id)commitSelectionChangesWithSelectedItems:(id)arg1;
- (id)actionSetBuilderForItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(_Bool)arg3 shouldShowSectionHeaders:(_Bool)arg4 itemProvidersCreator:(CDUnknownBlockType)arg5;

@end
