/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesCustomizeViewController : HUItemTableOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_usePRButton;
    OBLinkTrayButton *_customizeButton;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *usePRButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;
- (id)hu_preloadContent;
- (void)_setupTVViewingProfiles:(id)arg1;
- (void)_dontSetupTVViewingProfiles:(id)arg1;

@end
