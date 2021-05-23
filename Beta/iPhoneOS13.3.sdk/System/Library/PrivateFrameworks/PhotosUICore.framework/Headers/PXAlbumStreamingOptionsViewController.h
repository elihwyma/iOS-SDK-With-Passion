/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class AAUIProfilePictureStore, ACAccountStore, NSArray, NSMutableDictionary, NSOperationQueue, NSString, PLCloudSharedAlbum, PLCloudSharedAlbumInvitationRecord, UIBarButtonItem, UISwitch, UITableView;

@protocol PXAlbumStreamingOptionsViewControllerDelegate;

@interface PXAlbumStreamingOptionsViewController : UIViewController

{
    NSString *_visiblePublicURL;
    _Bool _showShareLink;
    PLCloudSharedAlbum *_album;
    id <PXAlbumStreamingOptionsViewControllerDelegate> _delegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UISwitch *_wantsPublicWebsiteSwitch;
    UISwitch *_wantsMultipleContributorsSwitch;
    UISwitch *_wantsAcceptCloudNotificationSwitch;
    unsigned long long _addSubscribersRow;
    NSOperationQueue *_familyRequestQueue;
    ACAccountStore *_familyAccountStore;
    NSArray *_familyMembers;
    AAUIProfilePictureStore *_familyMemberPictureStore;
    NSMutableDictionary *_familyProfilePictures;
    _Bool _isPresentedModally;
    _Bool _streamOwner;
    _Bool __shouldScrollToTopOnNextViewLayout;
    _Bool _albumIsFamilyStream;
    _Bool __showingPublicURLActivitySpinner;
    NSString *_albumName;
    NSArray *_sharedAlbumSubscribers;
    PLCloudSharedAlbumInvitationRecord *__selectedSubscriberInvitationRecord;
    NSString *__lastPublicURLSectionFooterTitle;
    NSString *__lastMultiContributorsSectionFooterTitle;
}

@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (copy, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSArray *sharedAlbumSubscribers;
@property (nonatomic) _Bool streamOwner;
@property (retain, nonatomic, setter=_setSelectedSubscriberInvitationRecord:) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord;
@property (nonatomic, setter=_setShouldScrollToTopOnNextViewLayout:) _Bool _shouldScrollToTopOnNextViewLayout;
@property (copy, nonatomic, setter=_setLastPublicURLSectionFooterTitle:) NSString *_lastPublicURLSectionFooterTitle;
@property (copy, nonatomic, setter=_setLastMultiContributorsSectionFooterTitle:) NSString *_lastMultiContributorsSectionFooterTitle;
@property (nonatomic) _Bool albumIsFamilyStream;
@property (nonatomic, setter=_setShowingPublicURLActivitySpinner:) _Bool _showingPublicURLActivitySpinner;
@property (nonatomic) id <PXAlbumStreamingOptionsViewControllerDelegate> delegate;
@property (nonatomic) _Bool isPresentedModally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (struct CGSize)contentSizeForViewInPopover;
- (void)_cancelAction:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)_doneAction:(id)arg1;
- (id)initWithAlbum:(id)arg1;
- (void)_updateAllControls;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateWantsAcceptCloudNotificationField;
- (void)_updateWantsMultipleContributorsField;
- (id)_suppressionContexts;
- (void)_handleCompletionWithReason:(int)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_changeWantsAcceptCloudNotification:(id)arg1;
- (void)_changeWantsMultipleContributors:(id)arg1;
- (void)_deletePhotoStream;
- (void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;
- (void)_displayDeleteConfirmation:(id)arg1;
- (void)_displayActivitySheet;
- (_Bool)_publicURLEnabled;
- (_Bool)_multipleContributorsEnabled;
- (_Bool)_shouldShowPublicURLActivitySpinner;
- (void)_setShowingMultipleContributorSpinner:(_Bool)arg1;
- (void)_updatePublicURLStateIfNecessaryAnimated:(_Bool)arg1;
- (void)_updateMultipleContributorsState;
- (id)_personViewControllerSubscriberInfo:(id)arg1 canResendInvitation:(_Bool)arg2 canRemoveSubscriber:(_Bool)arg3;
- (void)_resendInvitationToSelectedSubscriber;
- (void)_displayConfirmationForRemovalOfSelectedSubscriber;
- (void)_removeSelectedSubscriber;

@end
