/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSMutableSet, NSProgress, NSString, PXCMMAddRecipientButton, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientDataSourceManager, PXCMMComposeRecipientSelectionManager, PXCMMComposeRecipientValidationManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSession, PXCMMSpecManager, PXPhotoRecipientViewController, PXUpdater, UIButton, UILabel, UITableView, UIVisualEffectView;

@protocol PXCMMActionControllerDelegate, PXCMMComposeRecipientViewControllerDelegate, PXCMMPersonSuggestion;

@interface PXCMMComposeRecipientViewController : UIViewController

{
    PXCMMSession *_session;
    id <PXCMMComposeRecipientViewControllerDelegate> _delegate;
    id <PXCMMActionControllerDelegate> _actionDelegate;
    PXCMMSpecManager *_specManager;
    PXUpdater *_updater;
    UITableView *_composeRecipientTableView;
    PXCMMAddRecipientButton *_addRecipientButton;
    UIVisualEffectView *_footerVisualEffectView;
    UILabel *_privacyMessageLabel;
    UIButton *_sendButton;
    NSProgress *_actionProgress;
    PXCMMComposeRecipientDataSourceManager *_recipientManager;
    PXCMMComposeRecipientDataSource *_recipientsDataSource;
    PXCMMComposeRecipientSelectionManager *_recipientsSelectionManager;
    PXCMMComposeRecipientValidationManager *_recipientsValidationManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXPhotoRecipientViewController *_bootstrapRecipientViewController;
    id <PXCMMPersonSuggestion> _personSuggestionForBootstrapping;
    PXPhotoRecipientViewController *_addPeopleRecipientViewController;
    double _maximumContentWidth;
    NSMutableSet *_transientRecipientSelection;
    UIButton *_tapToRadarButton;
}

@property (nonatomic, readonly) PXCMMSpecManager *specManager;
@property (nonatomic, readonly) PXUpdater *updater;
@property (retain, nonatomic) UITableView *composeRecipientTableView;
@property (retain, nonatomic) PXCMMAddRecipientButton *addRecipientButton;
@property (retain, nonatomic) UIVisualEffectView *footerVisualEffectView;
@property (retain, nonatomic) UILabel *privacyMessageLabel;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (retain, nonatomic) PXCMMComposeRecipientDataSourceManager *recipientManager;
@property (retain, nonatomic) PXCMMComposeRecipientDataSource *recipientsDataSource;
@property (retain, nonatomic) PXCMMComposeRecipientSelectionManager *recipientsSelectionManager;
@property (retain, nonatomic) PXCMMComposeRecipientValidationManager *recipientsValidationManager;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (retain, nonatomic) PXPhotoRecipientViewController *bootstrapRecipientViewController;
@property (retain, nonatomic) id <PXCMMPersonSuggestion> personSuggestionForBootstrapping;
@property (retain, nonatomic) PXPhotoRecipientViewController *addPeopleRecipientViewController;
@property (nonatomic) double maximumContentWidth;
@property (retain, nonatomic) NSMutableSet *transientRecipientSelection;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (nonatomic, readonly) PXCMMSession *session;
@property (weak, nonatomic) id <PXCMMComposeRecipientViewControllerDelegate> delegate;
@property (weak, nonatomic) id <PXCMMActionControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSession:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)_headerHeight;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)_updateTableView;
- (void)_setNeedsUpdate;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)composeRecipientValidationManager:(id)arg1 didUpdateValidationWithChangedIndexes:(id)arg2;
- (void)composeRecipientSelectionManager:(id)arg1 didUpdateSelectionSnapshotWithChangeDetails:(id)arg2;
- (void)composeRecipientDataSourceManager:(id)arg1 didUpdateDataSourceWithChangeDetails:(id)arg2;
- (void)photoRecipientViewController:(id)arg1 didCompleteWithRecipients:(id)arg2;
- (void)photoRecipientViewControllerDidCancel:(id)arg1;
- (void)_handleAddRecipient:(id)arg1;
- (void)_handleActionButton:(id)arg1;
- (void)_tapToRadarTapped:(id)arg1;
- (void)_updateFooter;
- (void)_updateUserInteraction;
- (id)_validationTextColorForComposeRecipient:(id)arg1;
- (void)_dismissRecipientViewController:(id)arg1;
- (void)_bootstrapPersonSuggestion:(id)arg1 withContact:(id)arg2;
- (void)_contactViewController:(id)arg1 didSelectContact:(id)arg2;

@end
