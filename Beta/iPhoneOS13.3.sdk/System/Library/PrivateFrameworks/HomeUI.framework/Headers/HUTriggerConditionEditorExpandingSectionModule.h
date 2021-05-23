/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFCondition, HFItem, HFStaticItemProvider, HMHome, NSArray, NSString;

@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule

{
    _Bool _showOptions;
    unsigned long long _conditionType;
    HFItem *_showOptionsItem;
    NSArray *_optionItems;
    HFCondition *_condition;
    HFItem *_selectedOptionItem;
    HMHome *_home;
    HFStaticItemProvider *_itemProvider;
}

@property (retain, nonatomic) HFStaticItemProvider *itemProvider;
@property (retain, nonatomic) HFItem *showOptionsItem;
@property (retain, nonatomic) NSArray *optionItems;
@property (retain, nonatomic) HFCondition *condition;
@property (retain, nonatomic) HFItem *selectedOptionItem;
@property (nonatomic) _Bool showOptions;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long conditionType;

+ (id)sectionModuleForConditionType:(unsigned long long)arg1 itemUpdater:(id)arg2 home:(id)arg3;

- (id)sectionID;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;
- (void)_buildItemProvider;
- (id)conditionTitle;
- (_Bool)conditionIsDisabled;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)selectOptionItem:(id)arg1;
- (id)updateSelectionWithCondition:(id)arg1;
- (_Bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)createNoConditionOptionItemWithTitle:(id)arg1;
- (id)preferredConditionFromConditions:(id)arg1;

@end
