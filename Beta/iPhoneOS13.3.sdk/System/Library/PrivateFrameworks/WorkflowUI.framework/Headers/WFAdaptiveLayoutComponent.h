/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@interface WFAdaptiveLayoutComponent : CKComponent

{
    vector_e48f0605 _children;
}

+ (id)newWithChildren:(const vector_e48f0605 *)arg1 size:(const struct CKComponentSize *)arg2;

- (id).cxx_construct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
