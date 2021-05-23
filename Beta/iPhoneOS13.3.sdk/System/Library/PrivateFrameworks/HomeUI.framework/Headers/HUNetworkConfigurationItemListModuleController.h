/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@interface HUNetworkConfigurationItemListModuleController : HUItemTableModuleController

{
    unsigned long long _style;
}

@property (nonatomic, readonly) unsigned long long style;

- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (id)presentNetworkConfigurationSettingsForItem:(id)arg1 animated:(_Bool)arg2;
- (id)initWithModule:(id)arg1 style:(unsigned long long)arg2;
- (id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)arg1;

@end
