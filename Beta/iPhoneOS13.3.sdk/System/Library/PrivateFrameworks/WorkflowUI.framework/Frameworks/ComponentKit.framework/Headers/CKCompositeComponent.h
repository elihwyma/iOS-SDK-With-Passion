/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKCompositeComponent : CKComponent

{
    CKComponent *_component;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 component:(id)arg2;
+ (id)newWithComponent:(id)arg1;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)viewForAnimation;

@end
