/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol WBSOrderedTab, WBSTabOrderProvider;

@interface WBSTabOrderManager : NSObject

{
    NSMutableDictionary *_simplifiedIdentifierMap;
    long long _nextSimplifiedIdentifier;
    id <WBSTabOrderProvider> _tabOrderProvider;
}

@property (weak, nonatomic) id <WBSTabOrderProvider> tabOrderProvider;
@property (nonatomic, readonly) id <WBSOrderedTab> tabToSelectBeforeClosingSelectedTab;

- (id)init;
- (id)tabInsertionHintForPosition:(unsigned long long)arg1;
- (id)_tabInsertionHintForPosition:(unsigned long long)arg1 isBlankTab:(_Bool)arg2;
- (id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)arg1 relation:(unsigned long long)arg2;
- (unsigned long long)_indexOfTabToInsertNewTabAfter;
- (unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)arg1 isBlankTab:(_Bool)arg2;
- (unsigned long long)_indexOfLastRelatedTab;
- (_Bool)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2;
- (id)tabInsertionHintForNewBlankTab;
- (unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(_Bool)arg1;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)arg1;
- (id)tabInsertionHintForSpawnedTab;
- (unsigned long long)_userPreferredNewSpawnedTabPosition;
- (_Bool)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)arg1 inAscendingOrder:(_Bool)arg2;
- (_Bool)tab:(id)arg1 isInSameSetAsTab:(id)arg2;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1;
- (id)tabToInsertNewBlankTabAfter;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (id)tabToInsertSpawnedTabAfter;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1;

@end
