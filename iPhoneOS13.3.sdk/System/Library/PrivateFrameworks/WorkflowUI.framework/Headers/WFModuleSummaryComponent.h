//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSDictionary, NSSet, NSString, WFAction, WFModuleAppearance;
@protocol WFComponentNavigationContext, WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleSummaryComponent : CKStatefulViewComponent
{
    BOOL _processing;
    BOOL _extendSlotBackgroundOffEdges;
    BOOL _preparingToRun;
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

+ (id)newWithSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 processing:(BOOL)arg5 appearance:(id)arg6 stateWriter:(id)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 firstResponderParameterKey:(id)arg11 horizontalPadding:(double)arg12 textAlignment:(long long)arg13 extendSlotBackgroundOffEdges:(BOOL)arg14 actionForRunningMonitoring:(id)arg15 preparingToRun:(BOOL)arg16;
@property(readonly, nonatomic) BOOL preparingToRun; // @synthesize preparingToRun=_preparingToRun;
@property(readonly, nonatomic) __weak WFAction *actionForRunningMonitoring; // @synthesize actionForRunningMonitoring=_actionForRunningMonitoring;
@property(readonly, nonatomic) BOOL extendSlotBackgroundOffEdges; // @synthesize extendSlotBackgroundOffEdges=_extendSlotBackgroundOffEdges;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(readonly, nonatomic) NSString *firstResponderParameterKey; // @synthesize firstResponderParameterKey=_firstResponderParameterKey;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(readonly, nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) __weak id <WFModuleParameterStateWriter> stateWriter; // @synthesize stateWriter=_stateWriter;
@property(readonly, nonatomic) WFModuleAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) BOOL processing; // @synthesize processing=_processing;
@property(readonly, copy, nonatomic) NSDictionary *stagedParameterStates; // @synthesize stagedParameterStates=_stagedParameterStates;
@property(readonly, copy, nonatomic) NSDictionary *parameterStates; // @synthesize parameterStates=_parameterStates;
@property(readonly, copy, nonatomic) NSSet *editableParameters; // @synthesize editableParameters=_editableParameters;
@property(readonly, copy, nonatomic) NSSet *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *summaryFormatString; // @synthesize summaryFormatString=_summaryFormatString;
// - (void).cxx_destruct;
- (void)reflowWithStagedParameterStates:(id)arg1;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

