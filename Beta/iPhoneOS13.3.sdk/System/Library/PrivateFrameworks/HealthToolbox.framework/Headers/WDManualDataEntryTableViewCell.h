/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKDisplayType, NSArray, NSLayoutConstraint, NSNumberFormatter, NSString, UIFont, UILabel, UITextField, UIView;

@protocol WDManualDataEntryTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WDManualDataEntryTableViewCell : UITableViewCell

{
    unsigned long long _dataEntryType;
    UITextField *_valueField;
    UIView *_inputView;
    NSString *_decimalSeparator;
    UILabel *_displayNameLabel;
    UILabel *_unitLabel;
    NSArray *_displayNameLabelConstraints;
    NSNumberFormatter *_integerNumberFormatter;
    NSString *_lastValidSanitizedText;
    NSArray *_regularLayoutConstraints;
    NSArray *_largeTextLayoutConstraints;
    NSLayoutConstraint *_largeTextValueFieldToUnitLabelSpacingConstraint;
    _Bool _shouldHighlightWhenEditing;
    HKDisplayType *_displayType;
    id <WDManualDataEntryTableViewCellDelegate> _delegate;
    UIFont *_bodyFont;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool shouldHighlightWhenEditing;
@property (weak, nonatomic) id <WDManualDataEntryTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateFont;
- (void)_setupConstraints;
- (id)initWithDisplayName:(id)arg1 unitName:(id)arg2 dataEntryType:(unsigned long long)arg3;
- (void)_updateDecimalSeparator;
- (void)_setupUIWithDisplayName:(id)arg1 unitName:(id)arg2;
- (void)_setupIntegerNumberFormatterIfNeeded;
- (void)_updateDisplayNameLabelConstraints;
- (void)_valueFieldDidChange:(id)arg1;
- (id)_sanitizedTextFieldText:(id)arg1;
- (id)_removeDecimalSeparatorsFromText:(id)arg1;

@end
