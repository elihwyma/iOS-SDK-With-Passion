/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, HULocationDevice, HUPersonalRequestsDevicesModuleController, HUPersonalRequestsEditorItemManager, NSArray, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUPersonalRequestsSetupViewController : HUImageOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_usePRButton;
    OBLinkTrayButton *_customizeButton;
    HULocationDevice *_locationDevice;
    NSArray *_supportedMultiUserLanguages;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    HUPersonalRequestsDevicesModuleController *_prDevicesModuleController;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *usePRButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) HULocationDevice *locationDevice;
@property (retain, nonatomic) NSArray *supportedMultiUserLanguages;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (retain, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)hu_preloadContent;
- (void)_setupPersonalRequestsItemInfrastructure;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (void)_turnOnAllPersonalRequests:(id)arg1;
- (void)_customizePersonalRequests:(id)arg1;
- (void)_dontUsePersonalRequests:(id)arg1;
- (_Bool)_allPersonalRequestsDevicesSupportVoiceRecognition;

@end
