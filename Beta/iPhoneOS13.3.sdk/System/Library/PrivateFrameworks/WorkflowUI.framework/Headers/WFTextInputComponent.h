/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFTextInputComponent : CKStatefulViewComponent

{
    CDUnknownBlockType _updateBlock;
    CKTypedComponentAction_789af415 _beginAction;
    CKTypedComponentAction_789af415 _doneAction;
    struct WFTextInputAttributes _attributes;
}

@property (nonatomic, readonly) struct WFTextInputAttributes attributes;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) CKTypedComponentAction_789af415 beginAction;
@property (nonatomic, readonly) CKTypedComponentAction_789af415 doneAction;

+ (id)newWithAttributes:(const struct WFTextInputAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 beginAction:(CKTypedComponentAction_789af415)arg3 doneAction:(CKTypedComponentAction_789af415)arg4 size:(const struct CKComponentSize *)arg5;

- (id).cxx_construct;

@end
