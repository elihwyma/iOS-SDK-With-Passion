/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class NSString;

@interface WFModuleParameterSelectionRowComponent : CKCompositeComponent

{
    CKTypedComponentAction_693269b8 _action;
    NSString *_identifier;
}

+ (id)newWithIdentifier:(id)arg1 title:(id)arg2 disabledSubtitle:(id)arg3 enabled:(_Bool)arg4 action:(CKTypedComponentAction_693269b8)arg5 appearance:(id)arg6;

- (id).cxx_construct;
- (void)handleParameterLayoutPressed;

@end
