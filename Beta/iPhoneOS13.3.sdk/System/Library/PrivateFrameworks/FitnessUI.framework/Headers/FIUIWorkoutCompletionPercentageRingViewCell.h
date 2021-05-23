/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class ARUIRingsView, FIUIDividerView, HKWorkout, UIImageView, UILabel;

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell

{
    HKWorkout *_workout;
    double _currentCompletionFactor;
    ARUIRingsView *_ringsView;
    UIImageView *_gradientBackgroundImageView;
    UIImageView *_iconImageView;
    UILabel *_typeLabel;
    UILabel *_secondaryLabel;
    FIUIDividerView *_separatorView;
}

@property (retain, nonatomic) ARUIRingsView *ringsView;
@property (retain, nonatomic) UIImageView *gradientBackgroundImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) FIUIDividerView *separatorView;
@property (nonatomic) double currentCompletionFactor;
@property (retain, nonatomic) HKWorkout *workout;

+ (double)_ringDiameter;
+ (double)_ringTopPadding;
+ (double)_ringToTypeSpacing;
+ (double)_typeToSecondaryLabelSpacing;
+ (double)_secondaryLabelToSeparatorSpacing;
+ (double)rowHeightForWorkout:(id)arg1 width:(double)arg2;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ringsViewRenderer:(id)arg3;
- (void)setWorkout:(id)arg1 fillRing:(_Bool)arg2;
- (void)setWorkoutWithoutFillingRing:(id)arg1;
- (void)animateRingWithCompletion:(CDUnknownBlockType)arg1;

@end
