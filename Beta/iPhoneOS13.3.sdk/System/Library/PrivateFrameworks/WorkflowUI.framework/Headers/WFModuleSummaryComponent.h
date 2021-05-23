/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSDictionary, NSSet, NSString, WFAction, WFModuleAppearance;

@protocol WFComponentNavigationContext, WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleSummaryComponent : CKStatefulViewComponent

{
    _Bool _processing;
    _Bool _extendSlotBackgroundOffEdges;
    _Bool _preparingToRun;
    NSString *_summaryFormatString;
    NSSet *_parameters;
    NSSet *_editableParameters;
    NSDictionary *_parameterStates;
    NSDictionary *_stagedParameterStates;
    WFModuleAppearance *_appearance;
    id <WFModuleParameterStateWriter> _stateWriter;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
    NSString *_firstResponderParameterKey;
    double _horizontalPadding;
    long long _textAlignment;
    WFAction *_actionForRunningMonitoring;
}

@property (copy, nonatomic, readonly) NSString *summaryFormatString;
@property (copy, nonatomic, readonly) NSSet *parameters;
@property (copy, nonatomic, readonly) NSSet *editableParameters;
@property (copy, nonatomic, readonly) NSDictionary *parameterStates;
@property (copy, nonatomic, readonly) NSDictionary *stagedParameterStates;
@property (nonatomic, readonly) _Bool processing;
@property (nonatomic, readonly) WFModuleAppearance *appearance;
@property (weak, nonatomic, readonly) id <WFModuleParameterStateWriter> stateWriter;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;
@property (nonatomic, readonly) NSString *firstResponderParameterKey;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) _Bool extendSlotBackgroundOffEdges;
@property (weak, nonatomic, readonly) WFAction *actionForRunningMonitoring;
@property (nonatomic, readonly) _Bool preparingToRun;

+ (id)newWithSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 processing:(_Bool)arg5 appearance:(id)arg6 stateWriter:(id)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 firstResponderParameterKey:(id)arg11 horizontalPadding:(double)arg12 textAlignment:(long long)arg13 extendSlotBackgroundOffEdges:(_Bool)arg14 actionForRunningMonitoring:(id)arg15 preparingToRun:(_Bool)arg16;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (void)reflowWithStagedParameterStates:(id)arg1;

@end
