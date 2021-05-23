/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFNetworkConfigurationGroupItem, HMAccessoryNetworkProtectionGroup, HUNetworkProtectionModeOptionItemProvider, NSTimer;

@protocol HUNetworkConfigurationSettingsModuleDelegate;

@interface HUNetworkConfigurationSettingsModule : HFItemModule

{
    _Bool _isUpdatingProtectionMode;
    id <HUNetworkConfigurationSettingsModuleDelegate> _networkConfigurationSettingsModuleDelegate;
    HMAccessoryNetworkProtectionGroup *_group;
    HUNetworkProtectionModeOptionItemProvider *_networkProtectionModeOptionItemProvider;
    NSTimer *_updateProtectionModeTimer;
}

@property (retain, nonatomic) HUNetworkProtectionModeOptionItemProvider *networkProtectionModeOptionItemProvider;
@property (nonatomic) _Bool isUpdatingProtectionMode;
@property (retain, nonatomic) NSTimer *updateProtectionModeTimer;
@property (weak, nonatomic) id <HUNetworkConfigurationSettingsModuleDelegate> networkConfigurationSettingsModuleDelegate;
@property (nonatomic, readonly) HMAccessoryNetworkProtectionGroup *group;
@property (nonatomic, readonly) HFNetworkConfigurationGroupItem *sourceItem;

+ (id)_attributedCheckmarkIcon;
+ (id)_allowedHostDescriptionForHostGroup:(id)arg1;
+ (id)_attributedExclamationIcon;
+ (id)_attributedIconNamed:(id)arg1;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 group:(id)arg2;
- (id)_protectionModeOptionSectionFooter;
- (_Bool)isItemNetworkProtectionModeOptionItem:(id)arg1;
- (id)updateProtectionMode:(long long)arg1;

@end
