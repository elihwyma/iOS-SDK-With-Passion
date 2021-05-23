/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (RPExtensions)

+ (id)fallbackBundle;
+ (id)localizedBundle;
+ (id)_rpFrameworkBundle;
+ (id)executablePathWithPID:(int)arg1;
+ (id)_rpLocalizedAppNameFromBundleID:(id)arg1;
+ (id)_rpLocalizedStringFromFrameworkBundleWithKey:(id)arg1;
+ (id)baseIdentifier:(id)arg1;
+ (id)bundleWithPID:(int)arg1;

- (id)_rpLocalizedAppName;

@end
