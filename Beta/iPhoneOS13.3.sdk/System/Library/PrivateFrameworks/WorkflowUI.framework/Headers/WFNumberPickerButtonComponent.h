/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFNumberPickerButtonComponent : CKCompositeComponent

{
    _Bool _becomeFirstResponder;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    WFCustomButtonComponent *_buttonComponent;
}

@property (weak, nonatomic, readonly) WFCustomButtonComponent *buttonComponent;
@property (nonatomic, readonly) _Bool becomeFirstResponder;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) CDUnknownBlockType variableBlock;

+ (id)newWithAttributes:(const struct WFNumberPickerAttributes *)arg1 identifier:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 variableBlock:(CDUnknownBlockType)arg4;

@end
