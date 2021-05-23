/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray;

@interface EKUIDividedGridViewWeekView : UIView

{
    NSMutableArray *_buttonViews;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain) NSMutableArray *buttonViews;
@property (weak) NSLayoutConstraint *heightConstraint;

- (id)init;

@end
