/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModuleSummaryComponent : CKStatefulViewComponent {
    WFAction * _actionForRunningMonitoring;
    WFModuleAppearance * _appearance;
    NSSet * _editableParameters;
    bool  _extendSlotBackgroundOffEdges;
    NSString * _firstResponderParameterKey;
    double  _horizontalPadding;
    <WFComponentNavigationContext> * _navigationContext;
    NSDictionary * _parameterStates;
    NSSet * _parameters;
    bool  _preparingToRun;
    bool  _processing;
    NSDictionary * _stagedParameterStates;
    <WFModuleParameterStateWriter> * _stateWriter;
    NSString * _summaryFormatString;
    long long  _textAlignment;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic, readonly) WFAction *actionForRunningMonitoring;
@property (nonatomic, readonly) WFModuleAppearance *appearance;
@property (nonatomic, readonly, copy) NSSet *editableParameters;
@property (nonatomic, readonly) bool extendSlotBackgroundOffEdges;
@property (nonatomic, readonly) NSString *firstResponderParameterKey;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic, readonly, copy) NSDictionary *parameterStates;
@property (nonatomic, readonly, copy) NSSet *parameters;
@property (nonatomic, readonly) bool preparingToRun;
@property (nonatomic, readonly) bool processing;
@property (nonatomic, readonly, copy) NSDictionary *stagedParameterStates;
@property (nonatomic, readonly) <WFModuleParameterStateWriter> *stateWriter;
@property (nonatomic, readonly, copy) NSString *summaryFormatString;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;
@property (nonatomic, readonly) <WFVariableUIDelegate> *variableUIDelegate;

+ (id)newWithSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 processing:(bool)arg5 appearance:(id)arg6 stateWriter:(id)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 firstResponderParameterKey:(id)arg11 horizontalPadding:(double)arg12 textAlignment:(long long)arg13 extendSlotBackgroundOffEdges:(bool)arg14 actionForRunningMonitoring:(id)arg15 preparingToRun:(bool)arg16;

- (void).cxx_destruct;
- (id)actionForRunningMonitoring;
- (id)appearance;
- (struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)editableParameters;
- (bool)extendSlotBackgroundOffEdges;
- (id)firstResponderParameterKey;
- (double)horizontalPadding;
- (id)navigationContext;
- (id)parameterStates;
- (id)parameters;
- (bool)preparingToRun;
- (bool)processing;
- (void)reflowWithStagedParameterStates:(id)arg1;
- (id)stagedParameterStates;
- (id)stateWriter;
- (id)summaryFormatString;
- (long long)textAlignment;
- (id)variableProvider;
- (id)variableUIDelegate;

@end