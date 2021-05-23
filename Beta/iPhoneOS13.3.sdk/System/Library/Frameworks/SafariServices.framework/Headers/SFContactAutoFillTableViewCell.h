/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewCell.h>

@class SFContactAutoFillValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillTableViewCell : UITableViewCell

{
    SFContactAutoFillValue *_value;
    UIButton *_checkmarkButton;
    UILabel *_categoryLabel;
    UILabel *_optionLabel;
    _Bool _usesDetailAppearance;
    _Bool _checked;
}

@property (nonatomic) _Bool usesDetailAppearance;
@property (nonatomic) _Bool checked;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setValue:(id)arg1 property:(id)arg2;
- (void)checkmarkButtonTapped:(id)arg1;

@end
