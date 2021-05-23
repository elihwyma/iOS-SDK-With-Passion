/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

@interface AKAuthorizationScopeEditTableViewCell : UITableViewCell

{
    UITextField *_detailTextField;
}

@property (nonatomic, readonly) UITextField *detailTextField;

- (void)_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupDetailTextField;

@end
