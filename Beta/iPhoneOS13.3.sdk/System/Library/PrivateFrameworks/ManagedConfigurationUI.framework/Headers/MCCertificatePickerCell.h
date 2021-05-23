/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSTableCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface MCCertificatePickerCell : PSTableCell

{
    UILabel *_issuedByLabel;
    UILabel *_issuerLabel;
    UILabel *_expiresByLabel;
    UILabel *_expiryDateLabel;
}

+ (id)_dateFormatter;
+ (float)defaultCellHeight;
+ (id)_attributeFont;
+ (float)_attributeLabelSpace;

- (void)setExpirationDate:(id)arg1;
- (void)layoutSubviews;
- (void)setChecked:(_Bool)arg1;
- (id)_labelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)_checkmarkView;
- (void)setIssuer:(id)arg1;
- (id)_attributeLabelCopy;

@end
