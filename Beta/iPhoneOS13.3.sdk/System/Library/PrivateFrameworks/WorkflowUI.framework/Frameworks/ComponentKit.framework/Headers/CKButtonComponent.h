/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@interface CKButtonComponent : CKComponent

{
    struct CGSize _intrinsicSize;
}

+ (id)newWithTitles:(const unordered_map_56564eaf *)arg1 titleColors:(const unordered_map_ed3b4ccc *)arg2 images:(const unordered_map_25560788 *)arg3 backgroundImages:(const unordered_map_25560788 *)arg4 titleFont:(id)arg5 selected:(_Bool)arg6 enabled:(_Bool)arg7 action:(CKTypedComponentAction_e16478d5)arg8 size:(const struct CKComponentSize *)arg9 attributes:(const unordered_map_2a1e8409 *)arg10 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration)arg11;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
