/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@class NSString;

@interface WFVariableFieldComponent : CKStatefulViewComponent

{
    _Bool _editable;
    NSString *_text;
    CDUnknownBlockType _updateBlock;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) _Bool editable;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;

+ (id)newWithText:(id)arg1 editable:(_Bool)arg2 updateBlock:(CDUnknownBlockType)arg3 size:(const struct CKComponentSize *)arg4;

@end
