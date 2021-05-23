/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/ADActionViewController.h>

@class ADEventEditViewController, EKEvent, NSString;

@interface ADCalendarEventActionViewController : ADActionViewController

{
    EKEvent *_calendarEvent;
    ADEventEditViewController *_eventKitEditViewController;
}

@property (retain, nonatomic) EKEvent *calendarEvent;
@property (retain, nonatomic) ADEventEditViewController *eventKitEditViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;

@end
