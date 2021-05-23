/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface PMMusicMenuLabelCell : UITableViewCell

{
    UILabel *_label;
    NSLayoutConstraint *_labelLeadingConstraint;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;

- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end
