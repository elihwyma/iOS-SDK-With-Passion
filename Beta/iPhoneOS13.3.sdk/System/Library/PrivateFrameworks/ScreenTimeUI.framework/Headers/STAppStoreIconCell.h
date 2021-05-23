/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableCell.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STAppStoreIconCell : STTableCell

{
    UIImageView *_appIconView;
    UILabel *_nameLabel;
    UIButton *_viewButton;
}

@property (nonatomic, readonly) UIImageView *appIconView;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) UIButton *viewButton;

- (id)value;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)viewAppInStore:(id)arg1;
- (void)_didFetchAppInfoOrIcon:(id)arg1;

@end
