/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventViewController.h>

@class EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController;

@protocol EKEditItemViewControllerDelegate;

@interface EKUIProposedTimeEventViewController : EKEventViewController

{
    CDUnknownBlockType _completionBlock;
    EKCalendarEventInvitationNotificationAttendee *_proposedTimeAttendee;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

- (id)items;
- (id)proposedTime;
- (id)_statusButtons;
- (id)viewTitle;
- (void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2;
- (id)initWithProposedTimeAttendee:(id)arg1;

@end
