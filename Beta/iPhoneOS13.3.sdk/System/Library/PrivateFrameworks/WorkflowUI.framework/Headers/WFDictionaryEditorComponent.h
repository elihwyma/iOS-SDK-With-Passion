/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSArray, NSSet, NSString;

@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFDictionaryEditorComponent : CKStatefulViewComponent

{
    _Bool _variablesDisabled;
    _Bool _editable;
    NSArray *_keyValuePairs;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
    NSString *_localizedNewItemTypeName;
    NSSet *_allowedValueTypes;
    NSSet *_allowedVariableTypes;
    CDUnknownBlockType _updateBlock;
}

@property (nonatomic, readonly) NSArray *keyValuePairs;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;
@property (copy, nonatomic, readonly) NSString *localizedNewItemTypeName;
@property (copy, nonatomic, readonly) NSSet *allowedValueTypes;
@property (copy, nonatomic, readonly) NSSet *allowedVariableTypes;
@property (nonatomic, readonly) _Bool variablesDisabled;
@property (nonatomic, readonly) _Bool editable;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;

+ (id)newWithKeyValuePairs:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 navigationContext:(id)arg4 localizedNewItemTypeName:(id)arg5 variablesDisabled:(_Bool)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 editable:(_Bool)arg9 updateBlock:(CDUnknownBlockType)arg10 size:(const struct CKComponentSize *)arg11;

@end
