/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface FPUIAuthenticationButtonLikeCell : UITableViewCell

{
    UILabel *_label;
}

@property (weak, nonatomic) UILabel *label;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
