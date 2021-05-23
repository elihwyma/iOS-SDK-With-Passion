/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextView;

@protocol RTTUIServiceCellDelegate;

@interface RTTUIServiceUpdateCell : UITableViewCell

{
    UITextView *_titleView;
    UITextView *_subtitleView;
    id <RTTUIServiceCellDelegate> _delegate;
}

@property (weak, nonatomic) id <RTTUIServiceCellDelegate> delegate;

+ (double)heightForWidth:(double)arg1 withDelegate:(id)arg2;

- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (void)adjustTextViewSize;
- (id)serviceMessage;

@end
