/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItemProvider, HUCharacteristicEventOptionProvider, HUInstructionsItem, HUTriggerConditionEditorItemModule;

@protocol HFServiceVendor;

@interface HUCharacteristicTriggerEventItemManager : HFItemManager

{
    HFItem<HFServiceVendor> *_serviceVendingItem;
    HFItem *_activeOptionItem;
    HUTriggerConditionEditorItemModule *_conditionModule;
    HUInstructionsItem *_instructionsItem;
    HFItem *_serviceNameItem;
    HFStaticItemProvider *_staticItemProvider;
    HUCharacteristicEventOptionProvider *_optionProvider;
}

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFItem *serviceNameItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HUCharacteristicEventOptionProvider *optionProvider;
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem;
@property (retain, nonatomic) HFItem *activeOptionItem;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionModule;

+ (id)serviceVendingItemForCharacteristicTriggerBuilder:(id)arg1;
+ (CDUnknownBlockType)_optionItemComparator;
+ (id)_titleForItemSection:(id)arg1;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 delegate:(id)arg2;

@end
