/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCloudCallingListController.h>

@class NSArray, NSString, PSSpecifier, TPSCloudCallingDeviceController;

@interface TPSCloudCallingDeviceListController : TPSCloudCallingListController

{
    PSSpecifier *_devicesGroupSpecifier;
    PSSpecifier *_mainGroupSpecifier;
    PSSpecifier *_mainSwitchSpecifier;
    TPSCloudCallingDeviceController *_deviceController;
    NSArray *_deviceSwitchSpecifiers;
}

@property (copy, nonatomic) NSArray *deviceSwitchSpecifiers;
@property (nonatomic, readonly) TPSCloudCallingDeviceController *deviceController;
@property (nonatomic, readonly) PSSpecifier *devicesGroupSpecifier;
@property (nonatomic, readonly) PSSpecifier *mainGroupSpecifier;
@property (nonatomic, readonly) PSSpecifier *mainSwitchSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)specifiers;
- (void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isDeviceSwitchOn:(id)arg1;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isMainSwitchOn:(id)arg1;
- (void)cloudCallingDeviceController:(id)arg1 didChangeDevices:(id)arg2;

@end
