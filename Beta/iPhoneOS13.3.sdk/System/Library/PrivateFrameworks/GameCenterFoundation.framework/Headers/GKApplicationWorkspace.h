/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject

{
    LSApplicationWorkspace *_lsWorkspace;
}

@property (retain, nonatomic) LSApplicationWorkspace *lsWorkspace;

+ (id)defaultWorkspace;

- (void)dealloc;
- (void)openURL:(id)arg1;
- (_Bool)applicationIsInstalled:(id)arg1;
- (id)initWithWorkspace:(id)arg1;
- (void)openGameCenterSettings;
- (void)openSettings;
- (void)openICloudSettings;
- (id)applicationProxyForBundleID:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;

@end
