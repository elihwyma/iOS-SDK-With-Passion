/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFNumberFieldComponent : CKStatefulViewComponent

{
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    CKTypedComponentAction_789af415 _doneAction;
    struct WFNumberFieldAttributes _attributes;
}

@property (nonatomic, readonly) struct WFNumberFieldAttributes attributes;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) CDUnknownBlockType variableBlock;
@property (nonatomic, readonly) CKTypedComponentAction_789af415 doneAction;

+ (id)newWithAttributes:(const struct WFNumberFieldAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 doneAction:(CKTypedComponentAction_789af415)arg4 size:(const struct CKComponentSize *)arg5;

- (id).cxx_construct;

@end
