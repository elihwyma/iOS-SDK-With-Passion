/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class FIUIDividerView, NSDate, NSDateFormatter, UIFont, UILabel;

@interface FIUIWorkoutSummaryDateTimeTableViewCell : UITableViewCell

{
    UIFont *_labelFont;
    UIFont *_smallCapFont;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    FIUIDividerView *_dividerView;
    NSDate *_workoutDate;
    NSDateFormatter *_timeFormatter;
}

+ (double)rowHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupUI;
- (void)_configureAttributedString:(id)arg1;
- (void)_addSmallCapAttributeToString:(id)arg1 matchingString:(id)arg2;
- (void)setDateStringWithDate:(id)arg1;
- (void)setTimeStringWithStartDate:(id)arg1 endDate:(id)arg2;

@end
