/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <UIKit/UITableViewCell.h>

@protocol RTTUIReplyActionCellDelegate;

@interface RTTUIReplyActionCell : UITableViewCell

{
    id <RTTUIReplyActionCellDelegate> _delegate;
}

@property (weak, nonatomic) id <RTTUIReplyActionCellDelegate> delegate;

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3;

@end
