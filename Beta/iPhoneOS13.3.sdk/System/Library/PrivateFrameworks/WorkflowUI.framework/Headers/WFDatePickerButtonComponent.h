/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFDatePickerButtonComponent : CKCompositeComponent

{
    _Bool _becomeFirstResponder;
    WFCustomButtonComponent *_buttonComponent;
}

@property (weak, nonatomic, readonly) WFCustomButtonComponent *buttonComponent;
@property (nonatomic, readonly) _Bool becomeFirstResponder;

+ (id)newWithAttributes:(const struct WFDatePickerAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 size:(const struct CKComponentSize *)arg4;

@end
