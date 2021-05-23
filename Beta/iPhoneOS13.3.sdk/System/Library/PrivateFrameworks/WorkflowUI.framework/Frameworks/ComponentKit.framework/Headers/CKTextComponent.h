/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKTextComponent : CKComponent

{
    struct CKTextKitAttributes _attributes;
    struct CKTextComponentAccessibilityContext _accessibilityContext;
}

+ (id)newWithTextAttributes:(const struct CKTextKitAttributes *)arg1 viewAttributes:(const unordered_map_2a1e8409 *)arg2 options:(const struct CKTextComponentOptions *)arg3 size:(const struct CKComponentSize *)arg4;

- (id).cxx_construct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (struct MountResult)mountInContext:(const struct MountContext *)arg1 size:(struct CGSize)arg2 children:(shared_ptr_6a94d7a4)arg3 supercomponent:(id)arg4;

@end
