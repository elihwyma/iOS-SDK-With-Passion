/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UITextField, WFWorkflowWizardNameClearButton, WFWorkflowWizardNameIconButton, WFWorkflowWizardNameRecordButton;

@protocol WFWorkflowWizardNameCellDelegate;

@interface WFWorkflowWizardNameCell : UITableViewCell

{
    _Bool _showsHeySiri;
    _Bool _useDoneButtonOnKeyboard;
    _Bool _useHorizontalInset;
    id <WFWorkflowWizardNameCellDelegate> _delegate;
    WFWorkflowWizardNameIconButton *_iconButton;
    WFWorkflowWizardNameRecordButton *_recordButton;
    WFWorkflowWizardNameClearButton *_clearButton;
    UITextField *_shortcutNameTextField;
    NSArray *_horizontalConstraintsWithInset;
    NSArray *_horizontalConstraintsWithoutInset;
}

@property (retain, nonatomic) WFWorkflowWizardNameIconButton *iconButton;
@property (retain, nonatomic) WFWorkflowWizardNameRecordButton *recordButton;
@property (retain, nonatomic) WFWorkflowWizardNameClearButton *clearButton;
@property (retain, nonatomic) UITextField *shortcutNameTextField;
@property (retain, nonatomic) NSArray *horizontalConstraintsWithInset;
@property (retain, nonatomic) NSArray *horizontalConstraintsWithoutInset;
@property (weak, nonatomic) id <WFWorkflowWizardNameCellDelegate> delegate;
@property (nonatomic) _Bool showsHeySiri;
@property (nonatomic) _Bool useDoneButtonOnKeyboard;
@property (nonatomic) _Bool useHorizontalInset;
@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultRowHeight;

- (void)setName:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)setUseHorizontalContraints:(_Bool)arg1;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;
- (void)configureWithName:(id)arg1 showsHeySiri:(_Bool)arg2 icon:(id)arg3;
- (void)configureWithName:(id)arg1 showsHeySiri:(_Bool)arg2 useHorizontalInset:(_Bool)arg3 icon:(id)arg4;
- (void)configureWithName:(id)arg1 showsHeySiri:(_Bool)arg2 useHorizontalInset:(_Bool)arg3 icon:(id)arg4 customImageData:(id)arg5;
- (_Bool)shortcutNameIsEmpty;
- (void)textFieldDidChange;
- (void)updateButtonVisibility;
- (void)updateViewForDoneButton;
- (void)updateViewForHorizontalConstraints;
- (void)didTapIconButton;
- (void)didTapRecordButton;
- (void)didTapClearButton;

@end
