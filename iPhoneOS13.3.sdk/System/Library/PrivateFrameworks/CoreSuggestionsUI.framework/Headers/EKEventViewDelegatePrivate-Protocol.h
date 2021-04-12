//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/EKEventViewDelegate-Protocol.h>

@class EKEventEditViewController, EKEventViewController, UIAlertController;

@protocol EKEventViewDelegatePrivate <EKEventViewDelegate>

@optional
- (long long)editorPresentationStyle;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDisplayOfDeleteAlert:(UIAlertController *)arg2;
- (BOOL)eventViewDelegateShouldHandlePresentationOfDeleteAlert:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerEditButtonTemporarilyDisabled:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(EKEventViewController *)arg1;
- (void)eventViewControllerDidReceiveEditUserInteraction:(EKEventViewController *)arg1;
- (void)eventViewControllerWillDisappear:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldDismissSelf:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerPresentationWantsHiddenNavBarForSingleController;
- (BOOL)eventViewControllerShouldHideDeleteButton;
- (BOOL)eventViewControllerShouldShowInlineEditButtonForInvitations:(EKEventViewController *)arg1;
- (void)eventViewControllerInlineEditButtonWasTapped:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldHandleInlineEdit:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldHideInlineEditButton;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDismissalOfEditViewController:(EKEventEditViewController *)arg2;
- (void)eventViewControllerWillFinishEditingEvent:(EKEventViewController *)arg1 deleted:(BOOL)arg2;
- (void)eventViewControllerDidBeginEditingEventWithEditViewController:(EKEventEditViewController *)arg1;
- (void)eventViewController:(EKEventViewController *)arg1 didDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(BOOL)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 willDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(BOOL)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDisplayOfEditViewController:(EKEventEditViewController *)arg2 animated:(BOOL)arg3;
- (BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(EKEventViewController *)arg1;
- (BOOL)eventViewDelegateShouldCreateOwnEditViewController:(EKEventViewController *)arg1;
- (void)eventViewControllerWillBeginEditingEvent:(EKEventViewController *)arg1;
- (void)eventViewControllerDidRequestAddToCalendar:(EKEventViewController *)arg1;
@end

