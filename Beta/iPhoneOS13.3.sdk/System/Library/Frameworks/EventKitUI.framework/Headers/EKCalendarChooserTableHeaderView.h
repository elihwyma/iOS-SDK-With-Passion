/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface EKCalendarChooserTableHeaderView : UIView

{
    UILabel *_label;
    double _tableViewWidth;
}

@property (nonatomic, readonly) double tableViewWidth;

- (id)initWithTextMode:(int)arg1;
- (void)setTableViewWidth:(double)arg1;

@end
