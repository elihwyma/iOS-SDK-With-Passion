/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNMeCardSharingOnboardingViewController.h>

@class CNMeCardSharingAudienceDataSource, CNMeCardSharingOnboardingHeaderViewController, NSString;

@protocol CNMeCardSharingOnboardingAudienceViewControllerDelegate;

@interface CNMeCardSharingOnboardingAudienceViewController : CNMeCardSharingOnboardingViewController

{
    id <CNMeCardSharingOnboardingAudienceViewControllerDelegate> _delegate;
    CNMeCardSharingAudienceDataSource *_sharingAudienceDataSource;
    CNMeCardSharingOnboardingHeaderViewController *_headerViewController;
}

@property (retain, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (retain, nonatomic) CNMeCardSharingOnboardingHeaderViewController *headerViewController;
@property (weak, nonatomic) id <CNMeCardSharingOnboardingAudienceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)headerText;

- (void)dealloc;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithSelectedSharingAudience:(unsigned long long)arg1;
- (void)handleConfirmButtonTapped;

@end
