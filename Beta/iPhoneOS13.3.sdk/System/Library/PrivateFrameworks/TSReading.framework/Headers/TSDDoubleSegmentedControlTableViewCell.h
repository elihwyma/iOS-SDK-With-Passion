/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITableViewCell.h>

@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell

{
    TSKSegmentedControl *mLeftSegmentedControl;
    TSKSegmentedControl *mRightSegmentedControl;
}

@property (nonatomic, readonly) TSKSegmentedControl *leftSegmentedControl;
@property (nonatomic, readonly) TSKSegmentedControl *rightSegmentedControl;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2;

@end
