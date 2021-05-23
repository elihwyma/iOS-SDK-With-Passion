/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class ARUIRingsView, UIImageView, UILabel, UIView;

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell

{
    ARUIRingsView *_ringsView;
    UIImageView *_ringImageView;
    UIImageView *_iconImageView;
    UIView *_lineView;
    UILabel *_typeLabel;
}

@property (retain, nonatomic) ARUIRingsView *ringsView;
@property (retain, nonatomic) UIImageView *ringImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *typeLabel;

+ (double)preferredHeightForWorkout:(id)arg1 fittingWidth:(double)arg2;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithWorkout:(id)arg1;

@end
