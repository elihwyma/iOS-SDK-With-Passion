/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class NAFuture, NSArray, NSLayoutConstraint, NSString, NSTimer, OBLinkTrayButton, OBTrayButton, UIActivityIndicatorView;

@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_changeLanguageButton;
    OBLinkTrayButton *_cancelButton;
    NSArray *_supportedMultiUserLanguages;
    NSArray *_languageMismatchedHomeAssistantDevices;
    long long _selectedLanguageIndex;
    NSLayoutConstraint *_heightAnchor;
    UIActivityIndicatorView *_spinner;
    NAFuture *_changeLanguageFuture;
    NSTimer *_changeLanguageTimer;
}

@property (retain, nonatomic) OBTrayButton *changeLanguageButton;
@property (retain, nonatomic) OBLinkTrayButton *cancelButton;
@property (retain, nonatomic) NSArray *supportedMultiUserLanguages;
@property (retain, nonatomic) NSArray *languageMismatchedHomeAssistantDevices;
@property (nonatomic) long long selectedLanguageIndex;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NAFuture *changeLanguageFuture;
@property (retain, nonatomic) NSTimer *changeLanguageTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showSpinner;
- (void)_hideSpinner;
- (id)hu_preloadContent;
- (void)_changeLanguage;
- (void)_cancelLanguageChange;
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;
- (id)initWithSupportedMultiUserLanguages:(id)arg1 languageMismatchedHomeAssistantDevices:(id)arg2;

@end
