/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFParameter;

@interface WFParameterComponent : CKCompositeComponent

@property (weak, nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (_Bool)editsMultipleValues;

@end
