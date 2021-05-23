/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSSet, NSString, UIButton, UIViewController, WFPropertyListParameterValue, WFTextTokenChooser, WFTextTokenEditorView, WFVariableConfigurationButton;

@protocol NSObject, WFComponentNavigationContext, WFListEditorViewCellDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFListEditorViewCell : UITableViewCell

{
    _Bool _standaloneVariablesAsContentItems;
    _Bool _variablesDisabled;
    id <WFListEditorViewCellDelegate> _delegate;
    id <WFComponentNavigationContext> _navigationContext;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    id <NSObject> _value;
    CDUnknownBlockType _updateBlock;
    WFTextTokenEditorView *_valueEditor;
    WFVariableConfigurationButton *_variableValueButton;
    UIButton *_valueButton;
    UIViewController *_presentedViewController;
    CDUnknownBlockType _updateStateBlock;
    WFTextTokenChooser *_textTokenChooser;
}

@property (nonatomic, readonly) WFTextTokenEditorView *valueEditor;
@property (nonatomic, readonly) WFVariableConfigurationButton *variableValueButton;
@property (nonatomic, readonly) UIButton *valueButton;
@property (nonatomic, readonly) WFPropertyListParameterValue *valueEditorValue;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (copy, nonatomic) CDUnknownBlockType updateStateBlock;
@property (retain, nonatomic) WFTextTokenChooser *textTokenChooser;
@property (weak, nonatomic) id <WFListEditorViewCellDelegate> delegate;
@property (weak, nonatomic) id <WFComponentNavigationContext> navigationContext;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) _Bool standaloneVariablesAsContentItems;
@property (nonatomic) _Bool variablesDisabled;
@property (copy, nonatomic) id <NSObject> value;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)textTokenEditorTextDidChange:(id)arg1;
- (void)textTokenEditorTextDidEndEditing:(id)arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2;
- (void)beginEditingWithContext:(id)arg1;
- (void)setValueButtonTitle:(id)arg1;
- (void)collectionValueUpdatedWithCount:(unsigned long long)arg1;
- (void)updateValueEditorWithValue:(id)arg1;
- (void)updateWithValueState:(id)arg1;
- (id)valueTitle;
- (void)valueButtonTapped:(id)arg1;
- (void)updateEditorBlocks;
- (void)configureEditorViewController:(id)arg1;
- (void)notifyDelegateTextUpdated;
- (void)notifyDelegateTextUpdatedThrottled;
- (void)updateValueEditorResultType;
- (void)variableValueChanged:(id)arg1;
- (void)variableValueCleared:(id)arg1;

@end
