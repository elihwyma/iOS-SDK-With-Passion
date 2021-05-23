/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUPersonalRequestsDevicesItemModule, NSString;

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController

@property (nonatomic, readonly) HUPersonalRequestsDevicesItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (id)setPersonalRequestsDevices:(id)arg1;
- (id)turnOnPersonalRequestsForAllMultiUserCapableDevices;
- (void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)arg1 cell:(id)arg2 didTurnOn:(_Bool)arg3 showLanguageVariant:(_Bool)arg4;
- (void)_turnOnPersonalRequestForItem:(id)arg1 cell:(id)arg2 didTurnOn:(_Bool)arg3;
- (_Bool)_isCurrentDeviceCandidateForLocationDevice;
- (id)_promptToChangeLocationDeviceIfNecessary;
- (id)_promptToEnableSiriIfNecessary;
- (void)_presentAlert:(id)arg1;
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1;
- (id)_preflightEnablingPersonalRequests;
- (void)_togglePersonalRequestStateForItem:(id)arg1;

@end
