/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Preferences/PSTableCell.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;

@interface STStorageTableCell : PSTableCell

{
    NSMutableArray *_normalFontConstraints;
    NSMutableArray *_largeFontConstraints;
    NSMutableArray *_infoConstraints;
    NSLayoutConstraint *_iconSizeConstraint;
    NSLayoutConstraint *_sizeRightConstraint;
    NSLayoutConstraint *_minHeightConstraint;
    UIImageView *_iconView;
    UIView *_titleInfoView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    long long _size;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *sizeString;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) _Bool infoHidden;
@property (nonatomic) long long size;

+ (double)defaultCellHeight;

- (void)setEnabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setupTitleAndInfoConstraints;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;

@end
