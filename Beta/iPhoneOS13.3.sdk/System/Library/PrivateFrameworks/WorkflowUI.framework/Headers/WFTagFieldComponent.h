/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFComponentNavigationContext;

@interface WFTagFieldComponent : CKStatefulViewComponent

{
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    id <WFComponentNavigationContext> _navigationContext;
    struct WFTagFieldAttributes _attributes;
}

@property (nonatomic, readonly) struct WFTagFieldAttributes attributes;
@property (nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) CDUnknownBlockType variableBlock;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;

+ (id)newWithAttributes:(const struct WFTagFieldAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 navigationContext:(id)arg4 size:(const struct CKComponentSize *)arg5;

- (id).cxx_construct;

@end
