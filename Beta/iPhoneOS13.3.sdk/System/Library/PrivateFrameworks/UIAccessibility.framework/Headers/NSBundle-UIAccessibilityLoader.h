/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (UIAccessibilityLoader)

+ (id)accessibilityLocalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityInternalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;

- (id)accessibilityBundlePath;
- (void)_loadAXBundleForBundleOffMainThread;

@end
