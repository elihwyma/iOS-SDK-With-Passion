/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@interface AXATVUtils : NSObject

+ (id)sharedInstance;

- (id)atvaccessibilityLocalizedString:(id)arg1;
- (id)accessibilityIdentifierForResourceURL:(id)arg1;
- (id)accessibilityLabelForID:(id)arg1;
- (_Bool)isTVMLKitLoaded;
- (_Bool)isProcessTVAppStore;
- (id)atvaccessibilityLocalizedNameForBundleID:(id)arg1;
- (id)accessibilityLabelForResourceURL:(id)arg1;
- (id)currentFocusedView;

@end
