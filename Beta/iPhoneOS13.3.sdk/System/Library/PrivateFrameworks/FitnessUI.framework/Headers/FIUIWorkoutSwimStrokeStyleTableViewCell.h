/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class FIUIDividerView;

@interface FIUIWorkoutSwimStrokeStyleTableViewCell : UITableViewCell

{
    FIUIDividerView *_dividerView;
}

@property (retain, nonatomic) FIUIDividerView *dividerView;

+ (id)_sizingLabel;
+ (id)_overrideLabelAttributes;
+ (double)preferredHeightWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(_Bool)arg2 width:(double)arg3 formattingManager:(id)arg4;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(_Bool)arg2 formattingManager:(id)arg3;

@end
