/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKStaticLayoutComponent : CKComponent

{
    vector_24047093 _children;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2 children:(const vector_24047093 *)arg3;
+ (id)newWithChildren:(const vector_24047093 *)arg1;

- (id).cxx_construct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
