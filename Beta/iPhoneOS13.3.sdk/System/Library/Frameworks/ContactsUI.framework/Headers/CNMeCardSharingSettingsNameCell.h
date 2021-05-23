/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingSettingsNameCell : UITableViewCell

{
    UITextField *_textField;
}

@property (retain, nonatomic) UITextField *textField;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)layoutSubviews;

@end
