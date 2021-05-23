/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSString, STStorageProgressView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface STStorageTipCell : PSTableCell

{
    NSMutableArray *_constraints;
    UIImageView *_appIconView;
    UILabel *_titleLabel;
    UIImageView *_checkIconView;
    UIButton *_enableButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_progressLabel;
    STStorageProgressView *_progressView;
    _Bool _isOption;
    float _percent;
    NSString *_hformat;
    NSString *_h2format;
    double _titleWidth;
    double _enableWidth;
    double _progressWidth;
    double _nativeSpinnerWidth;
    float _prevPercent;
}

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_activateOption;

@end
