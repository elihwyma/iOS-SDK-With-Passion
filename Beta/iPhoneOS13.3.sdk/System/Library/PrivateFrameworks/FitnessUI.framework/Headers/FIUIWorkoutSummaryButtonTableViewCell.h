/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class UIButton;

@interface FIUIWorkoutSummaryButtonTableViewCell : UITableViewCell

{
    UIButton *_button;
}

@property (retain, nonatomic) UIButton *button;

+ (double)rowHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 title:(id)arg3;

@end
