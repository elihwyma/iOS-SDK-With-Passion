/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFControlPanelItemProvider, HFItem, HFServiceBuilder, HFStaticItem, HFStaticItemProvider, HFValveServiceItem, HUControlPanelController, HUNameItemModule, NSString;

@interface HUValveEditorItemManager : HFItemManager

{
    HUNameItemModule *_nameModule;
    HFStaticItem *_identifyItem;
    HUControlPanelController *_controlPanelController;
    HFServiceBuilder *_serviceBuilder;
    unsigned long long _editorMode;
    HFValveServiceItem *_sourceValveItem;
    HFItem *_nameItem;
    HFControlPanelItemProvider *_controlPanelItemProvider;
    HFStaticItemProvider *_staticItemProvider;
}

@property (retain, nonatomic) HFValveServiceItem *sourceValveItem;
@property (retain, nonatomic) HFItem *nameItem;
@property (retain, nonatomic) HUNameItemModule *nameModule;
@property (retain, nonatomic) HFStaticItem *identifyItem;
@property (retain, nonatomic) HUControlPanelController *controlPanelController;
@property (retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFServiceBuilder *serviceBuilder;
@property (nonatomic, readonly) unsigned long long editorMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)preferredSectionSortArray;
+ (CDUnknownBlockType)sortComparatorForValveEditorSections;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 editorMode:(unsigned long long)arg3;
- (id)_characteristicTypesForControlPanelItem:(id)arg1;

@end
