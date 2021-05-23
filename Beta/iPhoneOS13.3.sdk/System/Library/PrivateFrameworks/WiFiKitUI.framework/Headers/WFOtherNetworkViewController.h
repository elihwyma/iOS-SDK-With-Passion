/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

#import <WiFiKitUI/Swift-Protocol.h>

@class NSArray, NSOrderedSet, NSString, UIColor, WFTextFieldCell;

@protocol WFCredentialsProviderContext, WFOtherNetworkViewControllerDelegate;

@interface WFOtherNetworkViewController : UITableViewController <Swift>

{
    _Bool _wantsModalPresentation;
    _Bool _joining;
    _Bool _WAPIEnabled;
    _Bool _supportsWiFiPasswordSharing;
    _Bool _passwordRequired;
    _Bool _WPA3PersonalEnabled;
    _Bool _WPA3EnterpriseEnabled;
    _Bool _WPA2EnterpriseEnabledMFPCapable;
    _Bool _joinable;
    _Bool _overrideDefaultSecurity;
    _Bool _shouldCancelContextWhenViewDisappear;
    NSString *SSID;
    NSString *_activityString;
    long long _deviceCapability;
    id <WFOtherNetworkViewControllerDelegate> _delegate;
    NSString *_networkName;
    long long _securityMode;
    NSString *_username;
    NSString *_password;
    long long _profileMode;
    struct __SecIdentity *_TLSIdentity;
    NSArray *_TLSIdentities;
    NSArray *_WAPIRootCertificates;
    id _WAPIRootCertificate;
    NSArray *_WAPIIdentities;
    id _WAPIIdentity;
    NSString *_details;
    long long _style;
    NSOrderedSet *_sections;
    NSOrderedSet *_securityRows;
    WFTextFieldCell *_nameCell;
    WFTextFieldCell *_usernameCell;
    WFTextFieldCell *_passwordCell;
    UIColor *_backgroundColor;
    long long _firstResponderCell;
    WFTextFieldCell *_mostRecentFirstResponder;
    NSString *_defaultActivityString;
    id <WFCredentialsProviderContext> _context;
}

@property long long style;
@property (nonatomic) _Bool joinable;
@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) NSOrderedSet *securityRows;
@property (retain, nonatomic) WFTextFieldCell *nameCell;
@property (retain, nonatomic) WFTextFieldCell *usernameCell;
@property (retain, nonatomic) WFTextFieldCell *passwordCell;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long firstResponderCell;
@property (nonatomic) WFTextFieldCell *mostRecentFirstResponder;
@property (copy, nonatomic) NSString *defaultActivityString;
@property (nonatomic) _Bool overrideDefaultSecurity;
@property (retain, nonatomic) id <WFCredentialsProviderContext> context;
@property (nonatomic) long long deviceCapability;
@property (nonatomic) _Bool shouldCancelContextWhenViewDisappear;
@property (weak, nonatomic) id <WFOtherNetworkViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *networkName;
@property (nonatomic) long long securityMode;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) long long profileMode;
@property (nonatomic) _Bool WAPIEnabled;
@property (nonatomic) struct __SecIdentity *TLSIdentity;
@property (retain, nonatomic) NSArray *TLSIdentities;
@property (retain, nonatomic) NSArray *WAPIRootCertificates;
@property (nonatomic) id WAPIRootCertificate;
@property (retain, nonatomic) NSArray *WAPIIdentities;
@property (nonatomic) id WAPIIdentity;
@property (nonatomic) _Bool joining;
@property (nonatomic) _Bool supportsWiFiPasswordSharing;
@property (retain, nonatomic) NSString *details;
@property (nonatomic) _Bool passwordRequired;
@property (nonatomic) _Bool WPA3PersonalEnabled;
@property (nonatomic) _Bool WPA3EnterpriseEnabled;
@property (nonatomic) _Bool WPA2EnterpriseEnabledMFPCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsModalPresentation;
@property (copy, nonatomic, readonly) NSString *SSID;
@property (nonatomic) NSString *activityString;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)_returnKeyType;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)_updateSections;
- (void)orientationChanged:(id)arg1;
- (void)resetFirstResponder;
- (void)receiveSharedPassword:(id)arg1;
- (id)initWithOtherNetworkProviderContext:(id)arg1 deviceCapability:(long long)arg2;
- (id)initWithCredentialsProviderContext:(id)arg1 deviceCapability:(long long)arg2;
- (id)initWithOtherNetworkStyle:(long long)arg1;
- (id)_sectionsForStyle:(long long)arg1;
- (id)_securityRowsForStyle:(long long)arg1;
- (void)_updateJoinable;
- (void)_join:(id)arg1;
- (void)keyboardShown:(id)arg1;
- (void)_scrollToCellAndBecomeFirstResponder:(id)arg1;
- (_Bool)_canShowModes;
- (id)_availableSecurityTitles;
- (id)_securityStringFromType:(long long)arg1;
- (long long)_securityModeFromTitle:(id)arg1;
- (void)_setTLSIdentity:(id)arg1 specifier:(id)arg2;
- (id)_getTLSIdentity:(id)arg1;
- (void)_setWAPIIdentity:(id)arg1 specifier:(id)arg2;
- (id)_getWAPIIdentity:(id)arg1;
- (void)_setWAPIRootCertificate:(id)arg1 specifier:(id)arg2;
- (id)_getWAPIRootCertificate:(id)arg1;
- (id)_availableProfileModeTitles;
- (id)_profileModeStringFromType:(long long)arg1;
- (long long)_profileModeFromTitle:(id)arg1;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (id)_TLSIdentityDescription;
- (id)_WAPIIdentityDescription;
- (id)_WAPIRootCertificateDescription;
- (id)_availableProfileModes;
- (id)_availableSecurityModes;

@end
