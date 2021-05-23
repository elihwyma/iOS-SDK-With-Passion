/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSArray, NSSet;

@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFArrayEditorComponent : CKStatefulViewComponent

{
    _Bool _standaloneVariablesAsContentItems;
    _Bool _variablesDisabled;
    _Bool _editable;
    NSArray *_items;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
    NSSet *_allowedValueTypes;
    NSSet *_allowedVariableTypes;
    CDUnknownBlockType _updateBlock;
    CKTypedComponentAction_9dede3e0 _confirmationAction;
}

@property (nonatomic, readonly) NSArray *items;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;
@property (copy, nonatomic, readonly) NSSet *allowedValueTypes;
@property (copy, nonatomic, readonly) NSSet *allowedVariableTypes;
@property (nonatomic, readonly) _Bool standaloneVariablesAsContentItems;
@property (nonatomic, readonly) _Bool variablesDisabled;
@property (nonatomic, readonly) _Bool editable;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) CKTypedComponentAction_9dede3e0 confirmationAction;

+ (id)newWithItems:(id)arg1 editable:(_Bool)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 navigationContext:(id)arg5 variablesDisabled:(_Bool)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 standaloneVariablesAsContentItems:(_Bool)arg9 updateBlock:(CDUnknownBlockType)arg10 confirmationAction:(CKTypedComponentAction_9dede3e0)arg11 size:(const struct CKComponentSize *)arg12;

- (id).cxx_construct;

@end
