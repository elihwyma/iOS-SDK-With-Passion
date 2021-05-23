/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFActionTitleComponent : CKCompositeComponent

{
    CKComponent *_leadingComponent;
    CKTypedComponentAction_789af415 _action;
    _Bool _enabled;
}

+ (id)newWithIcon:(id)arg1 attributedTitle:(id)arg2 enabled:(_Bool)arg3 action:(CKTypedComponentAction_789af415)arg4;

- (id).cxx_construct;
- (void)componentTapped:(id)arg1;

@end
