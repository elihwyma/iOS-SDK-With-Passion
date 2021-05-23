/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@interface WFWrappingStackLayoutComponent : CKComponent

{
    struct WFWrappingStackLayoutComponentStyle _style;
    vector_e48f0605 _children;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2 style:(const struct WFWrappingStackLayoutComponentStyle *)arg3 children:(const vector_e48f0605 *)arg4;

- (id).cxx_construct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
