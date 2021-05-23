/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@interface WFCollapsibleComponent : CKComponent

{
    CKComponent *_component;
    _Bool _expanded;
}

+ (id)newWithComponent:(id)arg1 expanded:(_Bool)arg2;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)viewForAnimation;

@end
