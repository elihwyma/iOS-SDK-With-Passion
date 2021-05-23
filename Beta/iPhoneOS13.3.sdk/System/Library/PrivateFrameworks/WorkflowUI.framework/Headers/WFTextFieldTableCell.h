/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIStackView, UITextField, WFTextFieldTableItem;

@interface WFTextFieldTableCell : UITableViewCell

{
    UILabel *_textLabel;
    WFTextFieldTableItem *_tableItem;
    UIStackView *_stackView;
    UITextField *_textField;
}

@property (weak, nonatomic) WFTextFieldTableItem *tableItem;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)textDidChange:(id)arg1;
- (id)textLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;

@end
