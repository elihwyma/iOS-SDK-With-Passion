/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface PMEditorTitleTableViewCell : UITableViewCell

{
    UITextField *_textField;
    NSLayoutConstraint *_textFieldLeadingConstraint;
}

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) NSLayoutConstraint *textFieldLeadingConstraint;

@end
