//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
// - (void).cxx_destruct;
- (id)appIcon;
- (id)appName;
- (id)bundleIdentifier;
- (id)intent;

@end
