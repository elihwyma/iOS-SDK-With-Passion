/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

@class HMNetworkRouterProfile, NSString;

@protocol HUConfigurationViewControllerDelegate;

@interface HUSetupNetworkRouterProtectionAutoViewController : HUImageOBWelcomeController

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMNetworkRouterProfile *_profile;
}

@property (nonatomic, readonly) HMNetworkRouterProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_learnMorePressed:(id)arg1;
- (void)_continuePressed:(id)arg1;
- (_Bool)_hasNetworkCustomizableAccessories;
- (void)_customizePressed:(id)arg1;
- (void)_disablePressed:(id)arg1;
- (void)_updateNetworkProtection:(long long)arg1 andFinishWithActionResult:(unsigned long long)arg2;
- (id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2;

@end
