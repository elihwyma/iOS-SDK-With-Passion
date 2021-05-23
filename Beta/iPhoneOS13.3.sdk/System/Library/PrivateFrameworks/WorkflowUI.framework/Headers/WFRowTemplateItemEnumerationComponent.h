/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class NSArray, NSDictionary, NSObject, NSSet, NSString, WFTextTokenChooser, WFVariable;

@protocol NSCopying, WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFRowTemplateItemEnumerationComponent : CKCompositeComponent

{
    CDUnknownBlockType _updateBlock;
    NSArray *_possibleValues;
    NSObject<NSCopying> *_selectedValue;
    WFVariable *_variable;
    NSDictionary *_labelMapping;
    NSString *_prompt;
    NSSet *_allowedVariableTypes;
    _Bool _variablesDisabled;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
    WFTextTokenChooser *_textTokenChooser;
}

+ (id)newWithPossibleValues:(id)arg1 labels:(id)arg2 selectedValue:(id)arg3 prompt:(id)arg4 identifier:(id)arg5 updateBlock:(CDUnknownBlockType)arg6 options:(struct WFRowTemplateItemEnumerationComponentOptions)arg7 size:(const struct CKComponentSize *)arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11;

- (void)buttonTapped:(id)arg1;

@end
