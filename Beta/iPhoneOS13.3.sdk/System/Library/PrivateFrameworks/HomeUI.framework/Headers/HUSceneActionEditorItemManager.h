/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFActionSetBuilder, HFStaticItem, NSMutableDictionary, NSSet;

@interface HUSceneActionEditorItemManager : HFItemManager

{
    HFActionSetBuilder *_actionSetBuilder;
    unsigned long long _mode;
    NSSet *_prioritizedServices;
    HFStaticItem *_nameAndIconItem;
    HFStaticItem *_mediaInstructionsItem;
    HFStaticItem *_mediaItem;
    HFStaticItem *_changeServicesItem;
    HFStaticItem *_testSceneItem;
    HFStaticItem *_favoriteItem;
    HFStaticItem *_deleteSceneItem;
    NSMutableDictionary *_instructionsItemsByEditorType;
    NSMutableDictionary *_actionGridItemsByEditorType;
}

@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) HFStaticItem *nameAndIconItem;
@property (nonatomic, readonly) NSMutableDictionary *instructionsItemsByEditorType;
@property (nonatomic, readonly) NSMutableDictionary *actionGridItemsByEditorType;
@property (retain, nonatomic) HFStaticItem *mediaInstructionsItem;
@property (retain, nonatomic) HFStaticItem *mediaItem;
@property (retain, nonatomic) HFStaticItem *changeServicesItem;
@property (retain, nonatomic) HFStaticItem *testSceneItem;
@property (retain, nonatomic) HFStaticItem *favoriteItem;
@property (retain, nonatomic) HFStaticItem *deleteSceneItem;
@property (nonatomic, readonly) unsigned long long mode;
@property (copy, nonatomic) NSSet *prioritizedServices;
@property (nonatomic, readonly) NSSet *actionGridItems;
@property (nonatomic, readonly) NSSet *instructionsItems;
@property (nonatomic, readonly) NSSet *itemsToHideWhenEmpty;

+ (id)sectionIdentifierForActionGridEditorType:(unsigned long long)arg1;
+ (unsigned long long)actionGridEditorTypeForSectionIdentifier:(id)arg1;
+ (id)allActionGridEditorSectionIdentifiers;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_createItemsForActionGridEditorType:(unsigned long long)arg1 home:(id)arg2;
- (id)_buildSectionForActionGridEditorType:(unsigned long long)arg1;
- (id)initWithActionSetBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;

@end
