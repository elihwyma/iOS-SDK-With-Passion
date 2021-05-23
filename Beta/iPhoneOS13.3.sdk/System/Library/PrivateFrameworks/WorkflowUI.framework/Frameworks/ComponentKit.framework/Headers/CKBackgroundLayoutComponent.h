/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKBackgroundLayoutComponent : CKComponent

{
    CKComponent *_component;
    CKComponent *_background;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithComponent:(id)arg1 background:(id)arg2;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end
