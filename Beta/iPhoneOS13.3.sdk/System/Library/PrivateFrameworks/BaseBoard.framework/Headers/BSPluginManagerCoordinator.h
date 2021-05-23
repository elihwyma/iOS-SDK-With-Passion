/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject

{
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (id)_init;
- (void)registerPluginsFromBundle:(id)arg1;
- (id)pluginManagerForBundle:(id)arg1;
- (void)registerPlugins;
- (id)mainPluginManager;

@end
