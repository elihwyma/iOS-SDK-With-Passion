/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKInsetComponent : CKComponent

{
    struct UIEdgeInsets _insets;
    CKComponent *_component;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithInsets:(struct UIEdgeInsets)arg1 component:(id)arg2;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 insets:(struct UIEdgeInsets)arg2 component:(id)arg3;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end
