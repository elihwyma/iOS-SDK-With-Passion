/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <UIKit/UIWindow.h>

@interface AXUIDaemonWindow : UIWindow

+ (_Bool)_isSecure;

- (id)init;
- (struct UIEdgeInsets)_normalizedSafeAreaInsets;
- (void)_didUpdateOrientation:(id)arg1;

@end
