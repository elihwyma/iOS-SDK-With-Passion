/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponent.h>

@interface WFCustomButtonComponent : CKComponent

{
    struct CGSize _intrinsicSize;
}

+ (id)newWithTitles:(const unordered_map_56564eaf *)arg1 attributedTitles:(const unordered_map_303f88f0 *)arg2 titleColors:(const unordered_map_ed3b4ccc *)arg3 images:(const unordered_map_25560788 *)arg4 backgroundImages:(const unordered_map_25560788 *)arg5 titleFont:(id)arg6 selected:(_Bool)arg7 enabled:(_Bool)arg8 action:(CKTypedComponentAction_4e08d540)arg9 size:(const struct CKComponentSize *)arg10 buttonClass:(const struct CKComponentViewClass *)arg11 attributes:(const unordered_map_b2cee720 *)arg12 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration)arg13;
+ (id)newWithTitles:(const unordered_map_56564eaf *)arg1 attributedTitles:(const unordered_map_303f88f0 *)arg2 titleColors:(const unordered_map_ed3b4ccc *)arg3 images:(const unordered_map_25560788 *)arg4 backgroundImages:(const unordered_map_25560788 *)arg5 titleFont:(id)arg6 selected:(_Bool)arg7 enabled:(_Bool)arg8 action:(CKTypedComponentAction_4e08d540)arg9 size:(const struct CKComponentSize *)arg10 buttonClass:(const struct CKComponentViewClass *)arg11 attributes:(const unordered_map_b2cee720 *)arg12 titleLabelAttributes:(const unordered_map_b2cee720 *)arg13 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration)arg14;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
