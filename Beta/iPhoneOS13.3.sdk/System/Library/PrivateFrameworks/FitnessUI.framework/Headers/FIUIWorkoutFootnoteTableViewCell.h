/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    UIView *_dividerView;
    NSString *_titleText;
    NSString *_footnoteText;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *footnoteText;

+ (double)preferredHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
