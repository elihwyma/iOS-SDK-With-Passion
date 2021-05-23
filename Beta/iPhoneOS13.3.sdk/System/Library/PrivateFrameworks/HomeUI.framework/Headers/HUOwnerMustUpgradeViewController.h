/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUOwnerMustUpgradeViewController : OBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_continueButton;
}

@property (retain, nonatomic) OBTrayButton *continueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithUpgradeRequirements:(unsigned long long)arg1;
- (void)_continueButtonTapped:(id)arg1;

@end
