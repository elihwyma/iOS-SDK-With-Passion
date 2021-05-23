/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFNetworkConfigurationGroupItemProvider, HMHome;

@interface HUNetworkConfigurationItemListModule : HFItemModule

{
    HMHome *_home;
    HFNetworkConfigurationGroupItemProvider *_networkConfigurationGroupItemProvider;
}

@property (retain, nonatomic) HFNetworkConfigurationGroupItemProvider *networkConfigurationGroupItemProvider;
@property (nonatomic, readonly) HMHome *home;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)networkConfigurationGroupItemForProfile:(id)arg1;
- (_Bool)isItemNetworkConfigurationGroupItem:(id)arg1;

@end
