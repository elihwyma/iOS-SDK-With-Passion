/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <AXRuntime/AXRemoteElement.h>

@interface AXRemoteElement (UIAccessibilityElementTraversal)

- (_Bool)accessibilityViewIsModal;
- (_Bool)accessibilityActivate;
- (void)platformCleanup;
- (id)_iosAccessibilityAttributeValue:(long long)arg1;
- (id)_iosAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (_Bool)_accessibilityIsRemoteElement;
- (_Bool)_accessibilityEnumerateSiblingsWithParent:(id *)arg1 options:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_ancestorElementThatSupportsActivationAction;

@end
