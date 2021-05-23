/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    NSArray *_homeAssistantDevicesHavingLanguageMismatch;
    NSLayoutConstraint *_heightAnchor;
    OBTrayButton *_continueButton;
}

@property (retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)_continue;
- (id)hu_preloadContent;
- (id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2;

@end
