/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class CKComponent, NSNumber, WFParameter, WFVariableChooserParameterLayoutComponent;

@interface WFSwitchParameterComponent : WFParameterComponent

{
    WFParameter *_parameter;
    CDUnknownBlockType _updateBlock;
    WFVariableChooserParameterLayoutComponent *_layoutComponent;
    CKComponent *_switchComponent;
    NSNumber *_value;
}

@property (nonatomic, readonly) WFVariableChooserParameterLayoutComponent *layoutComponent;
@property (nonatomic, readonly) CKComponent *switchComponent;
@property (nonatomic, readonly) NSNumber *value;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (CDUnknownBlockType)updateBlock;
- (id)parameter;
- (void)presentTokenChooser:(id)arg1;
- (void)switchValueChanged:(id)arg1;

@end
