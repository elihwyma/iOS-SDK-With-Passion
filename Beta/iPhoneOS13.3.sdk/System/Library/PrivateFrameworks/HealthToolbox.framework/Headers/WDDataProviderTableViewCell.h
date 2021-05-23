/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface WDDataProviderTableViewCell : UITableViewCell

{
    UILabel *_inactiveLabel;
    UIButton *_checkmarkButton;
    NSLayoutConstraint *_iconImageWidth;
    _Bool _active;
    NSLayoutConstraint *_checkmarkLeadingConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *checkmarkLeadingConstraint;
@property (nonatomic, readonly) struct CGSize iconSize;
@property (nonatomic, getter=isActive) _Bool active;

- (void)prepareForReuse;
- (void)setDisplayName:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIconImage:(id)arg1;
- (void)_setupUI;

@end
