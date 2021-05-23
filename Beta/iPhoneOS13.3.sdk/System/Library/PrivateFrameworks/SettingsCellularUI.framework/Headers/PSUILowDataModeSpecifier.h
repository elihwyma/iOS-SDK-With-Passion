/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class CTServiceDescriptor, CoreTelephonyClient, PSListController;

__attribute__((visibility("hidden")))
@interface PSUILowDataModeSpecifier : PSSpecifier

{
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_hostController;
}

@property (retain, nonatomic) CTServiceDescriptor *serviceDescriptor;
@property (retain, nonatomic) CoreTelephonyClient *ctClient;
@property (weak, nonatomic) PSListController *hostController;

- (id)initWithFactory:(id)arg1 hostController:(id)arg2 parentSpecifier:(id)arg3;
- (void)setLowDataMode:(id)arg1 specifier:(id)arg2;
- (id)isLowDataModeEnabled:(id)arg1;

@end
