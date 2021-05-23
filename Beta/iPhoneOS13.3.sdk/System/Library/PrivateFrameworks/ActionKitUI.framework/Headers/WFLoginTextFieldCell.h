/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewCell.h>

@class WFLoginTextField;

__attribute__((visibility("hidden")))
@interface WFLoginTextFieldCell : UITableViewCell

{
    WFLoginTextField *_textField;
}

@property (weak, nonatomic, readonly) WFLoginTextField *textField;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
