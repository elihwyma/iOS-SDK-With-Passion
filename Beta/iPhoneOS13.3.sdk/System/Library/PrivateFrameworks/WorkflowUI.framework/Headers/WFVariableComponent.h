/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@protocol WFVariableUIDelegate;

@interface WFVariableComponent : CKCompositeComponent

{
    id <WFVariableUIDelegate> _variableUIDelegate;
    WFCustomButtonComponent *_buttonComponent;
    CDUnknownBlockType _updateBlock;
}

@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic, readonly) WFCustomButtonComponent *buttonComponent;

+ (id)newWithVariable:(id)arg1 variableUIDelegate:(id)arg2 resultType:(unsigned long long)arg3 editable:(_Bool)arg4 updateBlock:(CDUnknownBlockType)arg5;

- (void)variableDidChange:(id)arg1;
- (void)variableDidClear:(id)arg1;
- (void)variableDidUpdate:(id)arg1;

@end
