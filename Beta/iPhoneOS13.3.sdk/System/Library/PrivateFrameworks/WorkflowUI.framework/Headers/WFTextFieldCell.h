/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class WFPaddedTextField;

@interface WFTextFieldCell : UITableViewCell

{
    WFPaddedTextField *_textField;
    double _leftOffset;
}

@property (nonatomic, readonly) WFPaddedTextField *textField;
@property (nonatomic) double leftOffset;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
