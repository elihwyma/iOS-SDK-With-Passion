/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKEventDetailsHighlightControl, EKEventViewController;

@interface EKEventReportJunkView : UIView

{
    EKEventDetailsHighlightControl *_control;
    EKEventViewController *_controller;
    _Bool _isLargeDayView;
}

@property _Bool isLargeDayView;

- (id)initWithViewController:(id)arg1;
- (void)tapped:(id)arg1;

@end
