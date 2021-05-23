/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKCaretOptionalTextField, NSString, UILabel, UIStackView, UIView;

@protocol HKMedicalIDEditorCellEditDelegate;

@interface HKMedicalIDEditorCell : UITableViewCell

{
    double _minimumLabelWidth;
    id <HKMedicalIDEditorCellEditDelegate> _editDelegate;
    UIStackView *_stackView;
    UILabel *_labelLabel;
    HKCaretOptionalTextField *_inputTextField;
    UIView *_verticalSeparatorView;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField;
@property (retain, nonatomic) UIView *verticalSeparatorView;
@property (nonatomic) double minimumLabelWidth;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) id <HKMedicalIDEditorCellEditDelegate> editDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)showsLabelAndValue;

- (void)dealloc;
- (void)beginEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)commitEditing;
- (void)_localeDidChange:(id)arg1;
- (void)setupSubviews;
- (id)formattedValue;
- (void)updateValueLabel;
- (void)valueDidChange;
- (void)setupStackView;
- (void)dismissInputView;

@end
