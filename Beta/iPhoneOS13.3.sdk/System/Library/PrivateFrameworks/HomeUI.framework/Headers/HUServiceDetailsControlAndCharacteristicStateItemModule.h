/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceDetailsItemModule.h>

@class HFCharacteristicStateItemProvider, HFControlPanelItemProvider, NSSet;

@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate;

@interface HUServiceDetailsControlAndCharacteristicStateItemModule : HUServiceDetailsItemModule

{
    HFCharacteristicStateItemProvider *_characteristicStateItemProvider;
    HFControlPanelItemProvider *_controlPanelItemProvider;
    NSSet *_itemProviders;
    id <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> _delegate;
}

@property (weak, nonatomic) id <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> delegate;
@property (nonatomic, readonly) HFCharacteristicStateItemProvider *characteristicStateItemProvider;
@property (nonatomic, readonly) HFControlPanelItemProvider *controlPanelItemProvider;

- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (_Bool)isServiceGroup;
- (id)sourceServiceItem;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 delegate:(id)arg4;
- (id)_createGroupCharacteristicSectionsForItems:(id)arg1;
- (id)_createStandaloneCharacteristicSectionsForItems:(id)arg1;
- (id)_allCharacteristicTypesForItem:(id)arg1;
- (CDUnknownBlockType)_characteristicStateItemComparator;

@end
