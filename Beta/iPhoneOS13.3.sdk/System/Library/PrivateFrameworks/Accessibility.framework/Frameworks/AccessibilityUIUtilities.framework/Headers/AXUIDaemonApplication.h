/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <UIKit/UIApplication.h>

@interface AXUIDaemonApplication : UIApplication

+ (_Bool)_isSystemUIService;
+ (id)_systemUIServiceIdentifier;
+ (id)_systemUIServiceClientSettings;
+ (double)preferredWindowLevel;

@end
