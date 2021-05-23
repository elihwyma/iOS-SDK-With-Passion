/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUAccessorySettingsItemModule, NSMapTable, NSMutableSet, NSString;

@protocol HUAccessorySettingsItemModuleControllerDelegate;

@interface HUAccessorySettingsItemModuleController : HUItemTableModuleController

{
    id <HUAccessorySettingsItemModuleControllerDelegate> _delegate;
    NSMapTable *_cellToItemMap;
    NSMutableSet *_registeredButtonFutures;
}

@property (weak, nonatomic) id <HUAccessorySettingsItemModuleControllerDelegate> delegate;
@property (retain) NSMapTable *cellToItemMap;
@property (retain) NSMutableSet *registeredButtonFutures;
@property (nonatomic, readonly) HUAccessorySettingsItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)stepperCell:(id)arg1 steppedToValue:(id)arg2;
- (void)_setupCellAccessoryType:(id)arg1 forItem:(id)arg2 withKey:(id)arg3;
- (void)_registerButtonActionHandler:(id)arg1 item:(id)arg2;
- (void)_setupSliderCell:(id)arg1 forMinKey:(id)arg2 maxKey:(id)arg3;
- (void)_handleButtonPress:(id)arg1;
- (void)_selectOptionItem:(id)arg1;
- (void)_updateSwitchSettingItem:(id)arg1 withValue:(id)arg2;

@end
