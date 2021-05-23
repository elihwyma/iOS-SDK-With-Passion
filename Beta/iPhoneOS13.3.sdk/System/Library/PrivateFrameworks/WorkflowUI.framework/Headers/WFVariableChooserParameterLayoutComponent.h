/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent, WFParameter, WFTextTokenChooser, WFVariable;

@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFVariableChooserParameterLayoutComponent : CKCompositeComponent

{
    WFParameter *_parameter;
    WFVariable *_variable;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    CKComponent *_controlComponent;
    id <WFComponentNavigationContext> _navigationContext;
    _Bool _chooserCanClear;
    CDUnknownBlockType _updateBlock;
    WFTextTokenChooser *_chooser;
}

+ (id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 parameter:(id)arg3 variable:(id)arg4 updateBlock:(CDUnknownBlockType)arg5 options:(struct WFParameterComponentOptions)arg6 chooserCanClear:(_Bool)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 controlResistance:(const struct WFCompressionResistance *)arg11 controlComponent:(id)arg12;

- (void)presentTokenChooser:(id)arg1;

@end
