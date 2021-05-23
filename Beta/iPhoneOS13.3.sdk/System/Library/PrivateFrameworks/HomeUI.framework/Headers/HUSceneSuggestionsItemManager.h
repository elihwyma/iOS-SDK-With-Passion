/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFActionSetSuggestionItemProvider, HFItem;

@interface HUSceneSuggestionsItemManager : HFItemManager

{
    HFItem *_addCustomSceneItem;
    HFActionSetSuggestionItemProvider *_suggestionItemProvider;
}

@property (retain, nonatomic) HFActionSetSuggestionItemProvider *suggestionItemProvider;
@property (retain, nonatomic) HFItem *addCustomSceneItem;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_currentSectionIdentifiers;

@end
