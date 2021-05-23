/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, HUTVViewingProfilesEditorItemManager, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_useTVVPButton;
    OBLinkTrayButton *_customizeButton;
    HUTVViewingProfilesEditorItemManager *_tvVPEditorItemManager;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *useTVVPButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) HUTVViewingProfilesEditorItemManager *tvVPEditorItemManager;
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
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (void)_turnOnAllTVViewingProfiles:(id)arg1;
- (void)_customizeOrOffButton:(id)arg1;
- (void)_setupTVViewingProfilesItemInfrastructure;

@end
