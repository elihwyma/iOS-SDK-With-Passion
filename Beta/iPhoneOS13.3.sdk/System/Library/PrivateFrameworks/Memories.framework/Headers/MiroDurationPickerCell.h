/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface MiroDurationPickerCell : UIView

{
    UILabel *_textLabel;
    NSLayoutConstraint *_textLabelLeadingConstraint;
    NSLayoutConstraint *_textLabelTrailingConstraint;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *textLabelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelTrailingConstraint;

@end
