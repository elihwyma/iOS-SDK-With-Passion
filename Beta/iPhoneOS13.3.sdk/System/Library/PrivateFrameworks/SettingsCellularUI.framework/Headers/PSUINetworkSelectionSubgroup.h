/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableArray, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUINetworkSelectionSubgroup : NSObject

{
    PSListController *_listController;
    PSSpecifier *_parentSpecifier;
    CoreTelephonyClient *_ctClient;
    NSMutableArray *_bundleControllers;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CoreTelephonyClient *ctClient;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)willEnterForeground;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)networkSelected:(id)arg1 success:(_Bool)arg2 mode:(id)arg3;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;
- (void)reloadCellularNetworkSpecifier;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (id)localizedCellularNetworkName:(id)arg1;
- (_Bool)_showCarrier;
- (void)setShowsCarrierSettingsMenu:(_Bool)arg1;

@end
