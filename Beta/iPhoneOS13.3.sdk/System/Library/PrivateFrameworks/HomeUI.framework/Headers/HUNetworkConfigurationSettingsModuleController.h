/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class NSString;

@interface HUNetworkConfigurationSettingsModuleController : HUItemTableModuleController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)tappableTextView:(id)arg1 tappedAtIndex:(unsigned long long)arg2 withAttributes:(id)arg3;
- (void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)arg1;
- (id)_presentNetworkConfigurationSettingsMismatchViewController;

@end
