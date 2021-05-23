/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface MCSignInPageAuthenticationCell : UITableViewCell

{
    UIView *_authView;
}

@property (retain, nonatomic) UIView *authView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithAuthView:(id)arg1;
- (void)_addAuthView:(id)arg1;

@end
