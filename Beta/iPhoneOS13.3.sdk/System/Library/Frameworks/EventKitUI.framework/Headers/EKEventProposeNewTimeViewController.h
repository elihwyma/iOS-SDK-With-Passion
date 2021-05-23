/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

#import <EventKitUI/Swift-Protocol.h>

@class EKEvent, EKEventDateEditItem, EKInviteeAlternativeTimeSearcher, EKUIEventStatusButtonsView, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSString, SingleToolbarItemContainerView;

@protocol EKEditItemViewControllerDelegate;

@interface EKEventProposeNewTimeViewController : UITableViewController <Swift>

{
    _Bool _resetConflictResolutionSections;
    _Bool _viewIsVisible;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    NSDate *_originalDate;
    EKEvent *_event;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    NSDate *_proposedStartDate;
    NSArray *_sections;
    EKEventDateEditItem *_proposeTimeItem;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

@property (retain, nonatomic) NSDate *originalDate;
@property (nonatomic) _Bool resetConflictResolutionSections;
@property (nonatomic) _Bool viewIsVisible;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) EKUIEventStatusButtonsView *statusButtonsView;
@property (retain, nonatomic) SingleToolbarItemContainerView *statusButtonsContainerView;
@property (nonatomic) double statusButtonsViewCachedFontSize;
@property (retain, nonatomic) NSDate *proposedStartDate;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) EKEventDateEditItem *proposeTimeItem;
@property (retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection;
@property (retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection;
@property (retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic, readonly) NSDate *selectedStartDate;
@property (nonatomic, readonly) NSDate *selectedEndDate;
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
- (id)initWithEvent:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)_presentViewController:(id)arg1;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;
- (void)dateChangedTo:(id)arg1;
- (void)_searcherStateChanged:(long long)arg1;
- (id)_statusButtons;
- (void)_updateStatusButtons;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (void)updateCustomBackButton;
- (void)updateCheckmark;
- (long long)_indexForSection:(id)arg1;
- (void)_refreshIfNeeded;
- (_Bool)proposedTimeChanged;
- (void)_dismiss:(id)arg1;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (void)_dismissPresentedViewControllerAnimated:(_Bool)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(CDUnknownBlockType)arg3;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;

@end
