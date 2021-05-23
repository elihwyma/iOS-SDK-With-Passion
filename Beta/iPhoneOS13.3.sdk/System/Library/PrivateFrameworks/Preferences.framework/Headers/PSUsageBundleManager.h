/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface PSUsageBundleManager : NSObject

{
    NSDictionary *_bundleMap;
    NSArray *_usageBundleApps;
    NSMutableArray *_storageReporters;
}

- (void)_loadUsageBundlesWithHandler:(CDUnknownBlockType)arg1;
- (id)allUsageBundleApps;
- (void)vendUsageBundleAppsWithHandler:(CDUnknownBlockType)arg1;

@end
