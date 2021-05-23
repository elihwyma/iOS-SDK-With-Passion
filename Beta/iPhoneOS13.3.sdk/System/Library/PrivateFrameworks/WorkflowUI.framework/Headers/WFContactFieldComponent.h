/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFComponentNavigationContext;

@interface WFContactFieldComponent : CKStatefulViewComponent

{
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    id <WFComponentNavigationContext> _navigationContext;
    struct WFContactFieldAttributes _attributes;
}

@property (nonatomic, readonly) struct WFContactFieldAttributes attributes;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) CDUnknownBlockType variableBlock;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;

+ (id)newWithAttributes:(const struct WFContactFieldAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 navigationContext:(id)arg4 size:(const struct CKComponentSize *)arg5;

- (id).cxx_construct;

@end
