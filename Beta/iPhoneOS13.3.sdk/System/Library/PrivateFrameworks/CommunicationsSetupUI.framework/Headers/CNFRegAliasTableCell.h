/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell

{
    _Bool _hasSpinner;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) _Bool hasSpinner;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setChecked:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)usesStandardBackgroundImage;
- (void)_updateIcon;

@end
