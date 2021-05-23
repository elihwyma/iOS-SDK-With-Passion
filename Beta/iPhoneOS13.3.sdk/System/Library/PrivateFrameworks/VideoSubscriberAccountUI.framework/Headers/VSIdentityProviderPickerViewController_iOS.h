/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UISearchController, VSFontCenter, VSIdentityProvider, VSIdentityProviderFilter, VSIdentityProviderTableViewDataSource, VSOnboardingInfoCenter, VSSearchBarDelegate;

@protocol VSIdentityProviderPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderPickerViewController_iOS : UITableViewController

{
    _Bool _cancellationAllowed;
    _Bool _dismissingSearchDueToSelection;
    id <VSIdentityProviderPickerViewControllerDelegate> _delegate;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSString *_requestingAppDisplayName;
    NSString *_resourceTitle;
    UISearchController *_searchController;
    VSOnboardingInfoCenter *_onboardingInfoCenter;
    VSIdentityProviderFilter *_filter;
    VSSearchBarDelegate *_searchBarDelegate;
    VSIdentityProviderTableViewDataSource *_unfilteredDataSource;
    VSIdentityProviderTableViewDataSource *_filteredDataSource;
    VSFontCenter *_fontCenter;
    VSIdentityProvider *_selectedIdentityProvider;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter;
@property (retain, nonatomic) VSIdentityProviderFilter *filter;
@property (retain, nonatomic) VSSearchBarDelegate *searchBarDelegate;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (nonatomic, getter=isDismissingSearchDueToSelection) _Bool dismissingSearchDueToSelection;
@property (retain, nonatomic) VSIdentityProvider *selectedIdentityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <VSIdentityProviderPickerViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (copy, nonatomic) NSArray *identityProviders;
@property (nonatomic) unsigned long long additionalProvidersMode;
@property (copy, nonatomic) NSString *requestingAppDisplayName;
@property (copy, nonatomic) NSString *resourceTitle;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didDismissSearchController:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)deselectSelectedProviderAnimated:(_Bool)arg1;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1;
- (void)_updateTableHeaderTitle;
- (id)_titleForTableHeaderView;
- (void)_didPickIdentityProvider:(id)arg1;
- (void)_didPickAdditionalIdentityProviders;
- (void)_performSelectionForIdentityProvider:(id)arg1;
- (id)titleForTableFooterView;
- (void)_showAboutPrivacy:(id)arg1;

@end
