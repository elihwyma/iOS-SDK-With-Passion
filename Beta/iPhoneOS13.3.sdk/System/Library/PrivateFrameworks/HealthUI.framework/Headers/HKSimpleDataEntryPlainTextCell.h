/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKSimpleDataEntryCell.h>

@class HKCaretOptionalTextField, NSArray, NSNumber, NSString, UILabel, UIView;

@protocol HKSimpleDataEntryCellDelegate;

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell

{
    UIView *_horizontalSeparator;
    NSNumber *_characterCountLimit;
    _Bool _editDisabled;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    id <HKSimpleDataEntryCellDelegate> _delegate;
    UILabel *_titleLabel;
    HKCaretOptionalTextField *_inputTextField;
    NSString *_lastChangedText;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField;
@property (retain, nonatomic) NSString *lastChangedText;
@property (weak, nonatomic) id <HKSimpleDataEntryCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginEditing;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_updateForCurrentSizeCategory;
- (_Bool)editDisabled;
- (void)setEditDisabled:(_Bool)arg1;
- (id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupInputTextFieldWithIntention:(long long)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)_setupLabels;
- (void)_setupLayoutConstraints;
- (void)_informDelegateForContentChange;

@end
