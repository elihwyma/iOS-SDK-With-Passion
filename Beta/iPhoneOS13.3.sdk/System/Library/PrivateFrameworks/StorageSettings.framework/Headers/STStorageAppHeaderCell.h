/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;

@interface STStorageAppHeaderCell : PSTableCell

{
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_vendorLabel;
    UIImageView *_appIconView;
    UIImageView *_cloudIconView;
    _Bool _isDemoted;
    _Bool _infoHidden;
}

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) _Bool infoHidden;

+ (id)specifierForAppIdentifier:(id)arg1;
+ (id)specifierForStorageApp:(id)arg1;
+ (id)specifierForAppProxy:(id)arg1;
+ (id)specifierForAppBundleURL:(id)arg1;

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
