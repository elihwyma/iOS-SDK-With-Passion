/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingTextFieldTableViewCell : UITableViewCell

{
    UITextField *_textField;
}

@property (retain, nonatomic) UITextField *textField;

+ (id)cellIdentifier;

- (void)layoutSubviews;

@end
