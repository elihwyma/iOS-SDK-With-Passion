/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSListController.h>

@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController

{
    IDSService *_relayService;
}

@property (retain, nonatomic) IDSService *relayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)deviceIsAuthorized:(id)arg1;
+ (id)authorizedSMSRelayDevices;
+ (unsigned long long)numberOfActiveDevices;
+ (_Bool)shouldShowSMSRelaySettings;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)specifiers;
- (void)setDeviceActive:(id)arg1 specifier:(id)arg2;
- (id)getDeviceActive:(id)arg1;

@end
