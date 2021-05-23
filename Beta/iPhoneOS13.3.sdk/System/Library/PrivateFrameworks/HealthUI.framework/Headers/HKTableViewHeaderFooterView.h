/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface HKTableViewHeaderFooterView : UIView

{
    UILabel *_label;
    double _preferredMaxLayoutWidth;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) double preferredMaxLayoutWidth;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateFont;

@end
