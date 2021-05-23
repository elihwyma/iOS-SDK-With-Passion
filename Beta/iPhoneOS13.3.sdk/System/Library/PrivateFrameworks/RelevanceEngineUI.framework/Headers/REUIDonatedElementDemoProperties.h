/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUIDonatedElementProperties.h>

@class INIntent, NSString, UIImage;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties

{
    NSString *_demoBundleIdentifier;
    INIntent *_demoIntent;
    NSString *_demoAppName;
    UIImage *_demoAppIcon;
}

+ (id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4;

- (id)bundleIdentifier;
- (id)intent;
- (id)appName;
- (id)appIcon;

@end
