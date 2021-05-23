/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUHomePersonalIdentityDeviceConfigurationViewController : OBTableWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_changeLanguageButton;
    OBLinkTrayButton *_cancelButton;
    NSArray *_mediaProfilesAndLanguageInfoList;
    long long _selectedLanguageIndex;
    NSLayoutConstraint *_heightAnchor;
}

@property (retain, nonatomic) OBTrayButton *changeLanguageButton;
@property (retain, nonatomic) OBLinkTrayButton *cancelButton;
@property (retain, nonatomic) NSArray *mediaProfilesAndLanguageInfoList;
@property (nonatomic) long long selectedLanguageIndex;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
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
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)hu_preloadContent;
- (void)_changeLanguage;
- (void)_cancelLanguageChange;
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;
- (id)initWithMediaProfileAndLanguageInfo:(id)arg1;

@end
