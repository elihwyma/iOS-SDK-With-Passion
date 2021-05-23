/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFConditionItemProvider, HFTransformItemProvider, HMHome, NSMutableSet, NSSet, NSString;

@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule

{
    HMHome *_home;
    HFConditionItemProvider *_sourceConditionItemProvider;
    HFTransformItemProvider *_itemProvider;
    NSMutableSet *_mutableEnabledConditions;
    NSMutableSet *_mutableDisabledConditions;
}

@property (nonatomic, readonly) HFConditionItemProvider *sourceConditionItemProvider;
@property (nonatomic, readonly) HFTransformItemProvider *itemProvider;
@property (retain, nonatomic) NSMutableSet *mutableEnabledConditions;
@property (retain, nonatomic) NSMutableSet *mutableDisabledConditions;
@property (nonatomic, readonly) NSSet *enabledConditions;
@property (nonatomic, readonly) NSSet *disabledConditions;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long conditionType;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (void)_buildItemProviders;
- (_Bool)isConditionEnabled:(id)arg1;
- (void)updateEnabledConditions:(id)arg1 disabledConditions:(id)arg2;
- (id)conditionForItem:(id)arg1;
- (id)itemForCondition:(id)arg1;
- (void)setConditionEnabled:(_Bool)arg1 forCondition:(id)arg2;

@end
