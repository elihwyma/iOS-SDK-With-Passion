/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;

@interface CalendarPublishingActivityViewController : UIActivityViewController

{
    id <CalendarPublishingActivityDelegate> _activityDelegate;
}

@property (weak) id <CalendarPublishingActivityDelegate> activityDelegate;

- (void)_prepareActivity:(id)arg1;
- (_Bool)_shouldShowSystemActivityType:(id)arg1;

@end
