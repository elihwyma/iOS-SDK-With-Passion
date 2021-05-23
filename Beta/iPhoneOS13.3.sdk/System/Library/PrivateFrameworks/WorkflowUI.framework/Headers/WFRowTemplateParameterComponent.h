/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFRowTemplateParameterState;

@interface WFRowTemplateParameterComponent : CKCompositeComponent

{
    WFRowTemplateParameterState *_state;
    unsigned long long _rowIndex;
    CKTypedComponentAction_0d80aa58 _deleteAction;
}

+ (id)numberFormatter;
+ (id)itemFont;
+ (id)newWithState:(id)arg1 rowIndex:(unsigned long long)arg2 updateBlock:(CDUnknownBlockType)arg3 deleteAction:(CKTypedComponentAction_0d80aa58)arg4 tappedAction:(CKTypedComponentAction_789af415)arg5 options:(struct WFRowTemplateParameterComponentOptions)arg6 style:(const struct WFWrappingStackLayoutComponentStyle *)arg7 size:(const struct CKComponentSize *)arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11;

- (id).cxx_construct;
- (void)deleteButtonPressed;

@end
