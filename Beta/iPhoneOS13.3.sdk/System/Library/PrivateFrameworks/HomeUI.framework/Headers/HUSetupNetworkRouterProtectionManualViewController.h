/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableOBWelcomeController.h>

@class NSString;

@protocol HUConfigurationViewControllerDelegate;

@interface HUSetupNetworkRouterProtectionManualViewController : HUItemTableOBWelcomeController

{
    id <HUConfigurationViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_continuePressed:(id)arg1;
- (void)_cancelPressed:(id)arg1;
- (void)_disablePressed:(id)arg1;
- (id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2;

@end
