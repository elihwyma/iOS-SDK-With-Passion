/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFListEditorViewCell.h>

@class UIView, WFTextTokenEditorView;

@interface WFDictionaryEditorViewCell : WFListEditorViewCell

{
    UIView *_separatorView;
    WFTextTokenEditorView *_keyEditor;
}

@property (weak, nonatomic, readonly) UIView *separatorView;
@property (weak, nonatomic, readonly) WFTextTokenEditorView *keyEditor;

- (void)setValue:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setVariableProvider:(id)arg1;
- (void)setVariablesDisabled:(_Bool)arg1;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)beginEditingWithContext:(id)arg1;
- (id)valueEditorValue;
- (void)updateWithValueState:(id)arg1;
- (id)valueTitle;
- (void)updateEditorBlocks;
- (void)configureEditorViewController:(id)arg1;

@end
