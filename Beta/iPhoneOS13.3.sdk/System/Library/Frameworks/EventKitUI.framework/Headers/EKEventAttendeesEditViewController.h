/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKEventAttendeePicker, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController

{
    EKEventAttendeePicker *_picker;
    EKEvent *_event;
    _Bool _cancelTapped;
    _Bool _disableShowingButtons;
    _Bool _appendOnly;
}

@property (nonatomic) _Bool disableShowingButtons;
@property (copy, nonatomic) NSArray *attendees;
@property (nonatomic) _Bool appendOnly;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
- (_Bool)presentModally;
- (_Bool)editItemShouldBeAskedForInjectableViewController;
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)setSearchAccountID:(id)arg1;
- (_Bool)validateAllowingAlert:(_Bool)arg1;
- (void)_cancelTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (_Bool)validateEmailWithString:(id)arg1;
- (id)_firstInvalidRecipientAddress;
- (id)_createAttendeeFromRecipient:(id)arg1;
- (id)_createRecipientFromAttendee:(id)arg1;
- (id)_attendeeFromRecipient:(id)arg1;
- (id)_recipientFromAttendee:(id)arg1;
- (_Bool)prefersToBePresentedFromUINavigationController;

@end
