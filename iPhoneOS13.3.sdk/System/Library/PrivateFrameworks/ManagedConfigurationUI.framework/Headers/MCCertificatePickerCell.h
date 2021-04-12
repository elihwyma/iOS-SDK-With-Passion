//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
+ (float)_attributeLabelSpace;
+ (id)_attributeFont;
+ (float)defaultCellHeight;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIssuer:(id)arg1;
- (id)_attributeLabelCopy;
- (id)_labelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)_checkmarkView;

@end

