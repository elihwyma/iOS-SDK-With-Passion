/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSSet, NSString, UITableView;

@protocol WFComponentNavigationContext, WFListEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFListEditorView : UIView

{
    _Bool _variablesDisabled;
    _Bool _standaloneVariablesAsContentItems;
    NSString *_localizedNewItemTypeName;
    id <WFListEditorViewDelegate> _delegate;
    NSArray *_items;
    NSSet *_allowedValueTypes;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    id <WFComponentNavigationContext> _navigationContext;
    CDUnknownBlockType _updateBlock;
    UITableView *_tableView;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (weak, nonatomic) id <WFListEditorViewDelegate> delegate;
@property (nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property (copy, nonatomic) NSString *localizedNewItemTypeName;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSSet *allowedValueTypes;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) _Bool variablesDisabled;
@property (nonatomic) _Bool standaloneVariablesAsContentItems;
@property (weak, nonatomic) id <WFComponentNavigationContext> navigationContext;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)cellClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_setItems:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)beginEditingWithContext:(id)arg1;
- (void)listEditorCell:(id)arg1 didUpdateToValue:(id)arg2;
- (void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)appendNewItem;
- (void)updateCells;
- (void)insertNewItemOfType:(long long)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)addNewItemIndexPath;

@end
