/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesEditViewController : EKEditItemViewController

{
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}

@property (nonatomic, readonly) NSDate *selectedStartDate;
@property (nonatomic, readonly) NSDate *selectedEndDate;

- (id)initWithEvent:(id)arg1;
- (void)loadView;

@end
