/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

@class EKEvent, EKInviteeAlternativeTimeSearcher, EKUIEventInviteesEditViewController, EKUIEventInviteesView, EKUIInviteesViewAddInviteesSection, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewProposedTimeSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSMutableArray, NSString;

@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesViewController : UITableViewController

{
    _Bool _resetAttendeesSections;
    _Bool _resetConflictResolutionSections;
    _Bool _viewIsVisible;
    _Bool _deletedParticipants;
    _Bool _fromDetail;
    _Bool _prohibitCallingSearcherStateChanged;
    EKUIEventInviteesEditViewController *_parentController;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    EKUIEventInviteesView *_inviteesView;
    EKEvent *_event;
    NSArray *_sections;
    EKUIInviteesViewAddInviteesSection *_addInviteesSection;
    NSMutableArray *_respondedSection;
    EKUIInviteesViewNotRespondedInviteesSection *_notRespondedSection;
    EKUIInviteesViewInvisibleInviteeStatusSection *_invisibleInviteeStatusSection;
    EKUIInviteesViewProposedTimeSection *_proposedTimeSection;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

@property (retain, nonatomic) NSDate *selectedStartDate;
@property (retain, nonatomic) NSDate *selectedEndDate;
@property (retain, nonatomic) EKUIEventInviteesView *inviteesView;
@property (nonatomic) _Bool resetAttendeesSections;
@property (nonatomic) _Bool resetConflictResolutionSections;
@property (nonatomic) _Bool viewIsVisible;
@property (nonatomic) _Bool deletedParticipants;
@property (nonatomic) _Bool fromDetail;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) EKUIInviteesViewAddInviteesSection *addInviteesSection;
@property (retain, nonatomic) NSMutableArray *respondedSection;
@property (retain, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection;
@property (retain, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection;
@property (retain, nonatomic) EKUIInviteesViewProposedTimeSection *proposedTimeSection;
@property (retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection;
@property (retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection;
@property (retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic) _Bool prohibitCallingSearcherStateChanged;
@property (weak, nonatomic) EKUIEventInviteesEditViewController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)_presentViewController:(id)arg1;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (id)initWithEvent:(id)arg1 fromDetail:(_Bool)arg2;
- (void)_searcherStateChanged:(long long)arg1;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (void)updateCustomBackButton;
- (long long)_indexForSection:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_dismiss:(id)arg1;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (void)_dismissPresentedViewControllerAnimated:(_Bool)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (void)_smoothRefreshIfNeededForSections:(id)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
- (void)_requestDismissal;
- (void)prepareToReloadAttendeesSections;

@end
