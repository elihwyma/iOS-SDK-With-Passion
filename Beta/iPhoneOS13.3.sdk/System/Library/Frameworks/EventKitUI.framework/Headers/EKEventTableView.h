/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableView.h>

@class EKEventViewController;

@interface EKEventTableView : UITableView

{
    EKEventViewController *_controller;
}

@property (weak, nonatomic) EKEventViewController *controller;

- (void)reloadData;

@end
