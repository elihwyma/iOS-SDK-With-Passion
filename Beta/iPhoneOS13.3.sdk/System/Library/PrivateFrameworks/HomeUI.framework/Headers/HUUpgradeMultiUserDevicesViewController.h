/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NSString, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUUpgradeMultiUserDevicesViewController : HUImageOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_continueButton;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithUpgradeRequirements:(unsigned long long)arg1 home:(id)arg2;
- (void)_continueButtonTapped:(id)arg1;

@end
