/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UINavigationController.h>

@class EKEventViewController;

@interface CalendarInvitationPopoverWrapperController : UINavigationController

{
    EKEventViewController *_eventViewController;
}

@property (retain, nonatomic) EKEventViewController *eventViewController;

- (id)initForEventUID:(int)arg1;

@end
