/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSDictionary, NSError, NSString, UIImage, WFAction, WFModuleAppearance;

@protocol WFModuleDelegate, WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleModel : NSObject

{
    _Bool _isMissing;
    _Bool _isDiscontinued;
    _Bool _isDraggingIntoWorkflow;
    _Bool _isDimmed;
    _Bool _showHandoffRequired;
    _Bool _showSettings;
    _Bool _isEditable;
    _Bool _isRemovable;
    _Bool _isProcessing;
    _Bool _isWorkflowRunning;
    _Bool _isSelectingParameter;
    _Bool _isPlaceholder;
    _Bool _showResourceErrors;
    NSString *_localizedTitle;
    NSString *_localizedName;
    NSString *_localizedSubtitle;
    UIImage *_icon;
    UIImage *_keyImage;
    NSString *_localizedParameterSummaryFormatString;
    NSAttributedString *_localizedFooter;
    WFModuleAppearance *_appearance;
    unsigned long long _headerTextStyle;
    unsigned long long _indentationLevel;
    NSError *_resourceError;
    NSArray *_allParameters;
    NSArray *_parametersInListing;
    NSDictionary *_parameterStates;
    unsigned long long _parameterCollapsingBehavior;
    Class _customConfigurationClass;
    NSArray *_processingParameters;
    NSString *_firstResponderParameterKey;
    unsigned long long _runningActionIndex;
    NSArray *_parametersExcludedFromSelection;
    id <WFModuleParameterStateWriter> _parameterStateWriter;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSArray *_workflowTypes;
    WFAction *_action;
    id <WFModuleDelegate> _delegate;
    CKTypedComponentAction_789af415 _processingCancelAction;
    CKTypedComponentAction_789af415 _processingDoneAction;
    CKTypedComponentAction_92b97a4d _parameterSelectionAction;
}

@property (nonatomic, readonly) _Bool showResourceErrors;
@property (nonatomic, readonly) NSArray *workflowTypes;
@property (weak, nonatomic, readonly) WFAction *action;
@property (weak, nonatomic, readonly) id <WFModuleDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) UIImage *keyImage;
@property (copy, nonatomic, readonly) NSString *localizedParameterSummaryFormatString;
@property (copy, nonatomic, readonly) NSAttributedString *localizedFooter;
@property (nonatomic, readonly) _Bool isMissing;
@property (nonatomic, readonly) _Bool isDiscontinued;
@property (nonatomic, readonly) WFModuleAppearance *appearance;
@property (nonatomic, readonly) _Bool isDraggingIntoWorkflow;
@property (nonatomic, readonly) unsigned long long headerTextStyle;
@property (nonatomic, readonly) _Bool isDimmed;
@property (nonatomic, readonly) _Bool showHandoffRequired;
@property (nonatomic, readonly) _Bool showSettings;
@property (nonatomic, readonly) unsigned long long indentationLevel;
@property (nonatomic, readonly) NSError *resourceError;
@property (nonatomic, readonly) NSArray *allParameters;
@property (nonatomic, readonly) NSArray *parametersInListing;
@property (nonatomic, readonly) NSDictionary *parameterStates;
@property (nonatomic, readonly) unsigned long long parameterCollapsingBehavior;
@property (nonatomic, readonly) Class customConfigurationClass;
@property (nonatomic, readonly) _Bool isEditable;
@property (nonatomic, readonly) _Bool isRemovable;
@property (nonatomic, readonly) _Bool isProcessing;
@property (nonatomic, readonly) NSArray *processingParameters;
@property (copy, nonatomic, readonly) NSString *firstResponderParameterKey;
@property (nonatomic, readonly) CKTypedComponentAction_789af415 processingCancelAction;
@property (nonatomic, readonly) CKTypedComponentAction_789af415 processingDoneAction;
@property (nonatomic, readonly) _Bool isWorkflowRunning;
@property (nonatomic, readonly) unsigned long long runningActionIndex;
@property (nonatomic, readonly) _Bool isSelectingParameter;
@property (nonatomic, readonly) CKTypedComponentAction_92b97a4d parameterSelectionAction;
@property (nonatomic, readonly) NSArray *parametersExcludedFromSelection;
@property (weak, nonatomic, readonly) id <WFModuleParameterStateWriter> parameterStateWriter;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic, readonly) _Bool isPlaceholder;

+ (id)modelForViewingAction:(id)arg1 whileWorkflowRunning:(_Bool)arg2 withWorkflowTypes:(id)arg3 appearance:(id)arg4 showResourceErrors:(_Bool)arg5 dimmed:(_Bool)arg6 customConfigurationClass:(Class)arg7 delegate:(id)arg8;
+ (id)modelForEditingAction:(id)arg1 withWorkflowTypes:(id)arg2 draggingIntoWorkflow:(_Bool)arg3 customConfigurationClass:(Class)arg4 variableUIDelegate:(id)arg5 delegate:(id)arg6;
+ (id)modelForProcessingAction:(id)arg1 withParameters:(id)arg2 cancelAction:(CKTypedComponentAction_789af415)arg3 doneAction:(CKTypedComponentAction_789af415)arg4;
+ (id)modelForSelectingParameterOfAction:(id)arg1 excludingParameters:(id)arg2 selectionAction:(CKTypedComponentAction_92b97a4d)arg3 delegate:(id)arg4;
+ (id)modelForPlaceholder;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id).cxx_construct;
- (_Bool)setState:(id)arg1 ofParameter:(id)arg2;
- (id)initWithAction:(id)arg1 processingParameters:(id)arg2 workflowTypes:(id)arg3 editable:(_Bool)arg4 processing:(_Bool)arg5 workflowRunning:(_Bool)arg6 appearance:(id)arg7 dimmed:(_Bool)arg8 draggingIntoWorkflow:(_Bool)arg9 customConfigurationClass:(Class)arg10 showResourceErrors:(_Bool)arg11 variableUIDelegate:(id)arg12 delegate:(id)arg13 cancelAction:(CKTypedComponentAction_789af415)arg14 doneAction:(CKTypedComponentAction_789af415)arg15 parameterSelectionAction:(CKTypedComponentAction_92b97a4d)arg16 parameterSelectionExclusions:(id)arg17 placeholder:(_Bool)arg18;
- (id)updatedModel;

@end
