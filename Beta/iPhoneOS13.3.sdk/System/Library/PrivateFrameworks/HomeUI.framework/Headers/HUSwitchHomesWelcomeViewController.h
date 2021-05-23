/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUSwitchHomesWelcomeViewController : HUImageOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_continueButton;
    OBLinkTrayButton *_changeButton;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *changeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;
- (id)hu_preloadContent;
- (void)_continueButtonTapped:(id)arg1;
- (void)_changeButtonTapped:(id)arg1;

@end
