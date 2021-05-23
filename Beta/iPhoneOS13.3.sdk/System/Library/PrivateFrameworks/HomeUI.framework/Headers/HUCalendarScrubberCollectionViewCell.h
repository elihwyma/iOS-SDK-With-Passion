/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell

{
    _Bool _enabled;
    NSString *_dayOfWeekString;
    NSString *_dateString;
    UIView *_circleView;
    UILabel *_dateLabel;
    UILabel *_dayMonthLabel;
}

@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *dayMonthLabel;
@property (copy, nonatomic) NSString *dayOfWeekString;
@property (copy, nonatomic) NSString *dateString;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end
