/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

#import <WiFiKitUI/Swift-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIAlertController, UIColor, UISwitch, UITableView, UITableViewHeaderFooterView, WFHyperlinkFooterView, WFNetworkSettingsCellFactory, WFNetworkSettingsConfig;

@protocol WFDetailsProviderContext, WFNetworkSettingsViewControllerDataCoordinator, WFNetworkSettingsViewControllerDelegate;

@interface WFNetworkSettingsViewController : UIViewController <Swift>

{
    UITableViewHeaderFooterView *_lowDataModeFooterView;
    id <WFNetworkSettingsViewControllerDataCoordinator> _dataCoordinator;
    id <WFNetworkSettingsViewControllerDelegate> _delegate;
    WFNetworkSettingsConfig *_config;
    long long _deviceCapability;
    UITableView *_tableView;
    NSArray *_sections;
    WFNetworkSettingsCellFactory *_cellFactory;
    NSAttributedString *_recommendationLinkAttributedString;
    WFHyperlinkFooterView *_linkFooterView;
    UISwitch *_autoJoinSwitch;
    UISwitch *_autoLoginSwitch;
    UISwitch *_saveDataModeSwitch;
    UIColor *_backgroundColor;
    id <WFDetailsProviderContext> _context;
    UIAlertController *_alert;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain) NSArray *sections;
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory;
@property (copy, nonatomic) WFNetworkSettingsConfig *config;
@property (retain, nonatomic) NSAttributedString *recommendationLinkAttributedString;
@property (retain, nonatomic) WFHyperlinkFooterView *linkFooterView;
@property (retain, nonatomic) UISwitch *autoJoinSwitch;
@property (retain, nonatomic) UISwitch *autoLoginSwitch;
@property (retain, nonatomic) UISwitch *saveDataModeSwitch;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) id <WFDetailsProviderContext> context;
@property (retain, nonatomic) UIAlertController *alert;
@property (weak, nonatomic) id <WFNetworkSettingsViewControllerDataCoordinator> dataCoordinator;
@property (weak, nonatomic) id <WFNetworkSettingsViewControllerDelegate> delegate;
@property (nonatomic) long long deviceCapability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsModalPresentation;

- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 detailsContext:(id)arg2;
- (void)refreshConfig:(id)arg1;
- (long long)_sectionTypeAtSection:(long long)arg1;
- (_Bool)_isChinaDevice;
- (id)_sectionsFromConfig:(id)arg1;
- (void)_logSections:(id)arg1;
- (_Bool)_shouldShowIPv6ForConfig:(id)arg1;
- (_Bool)_isIPv4ConfigAuto;
- (void)_promptForgetNetwork;
- (void)_saveConfig:(id)arg1;
- (void)_presentDetailViewController:(id)arg1;
- (void)_presentRenewLeaseAlertWithSourceRect:(struct CGRect)arg1;
- (_Bool)_showRecommendationSupportLink;
- (id)_lowDataModeFooterView;
- (void)_saveAutoJoinEnabledChanged:(_Bool)arg1;
- (void)_saveAutoLoginEnabledChanged:(_Bool)arg1;
- (void)_saveSaveDataModeChanged:(_Bool)arg1;
- (void)_autoJoinSwitchChanged:(id)arg1;
- (void)_autoLoginSwitchChanged:(id)arg1;
- (void)_saveDataModeSwitchChanged:(id)arg1;
- (void)_openRecommendationsLink:(id)arg1;
- (id)_stringForSettingsSection:(long long)arg1;
- (void)_httpProxyConfigChanged:(long long)arg1;
- (void)_httpProxyAuthChanged:(id)arg1;

@end
