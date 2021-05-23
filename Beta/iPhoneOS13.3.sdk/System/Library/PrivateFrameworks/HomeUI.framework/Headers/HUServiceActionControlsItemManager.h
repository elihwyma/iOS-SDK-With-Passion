/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFControlPanelItemProvider, HFServiceActionItem;

@interface HUServiceActionControlsItemManager : HFItemManager

{
    HFServiceActionItem *_serviceActionItem;
    unsigned long long _mode;
    HFControlPanelItemProvider *_controlPanelItemProvider;
}

@property (retain, nonatomic) HFServiceActionItem *serviceActionItem;
@property (retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider;
@property (nonatomic, readonly) unsigned long long mode;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_actionControlsDelegate;
- (id)_sectionIdentifiers;
- (id)_sectionIdentifierForControlPanelItem:(id)arg1;
- (id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;

@end
