/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface InstalledAppsCache : NSObject

{
    NSMutableDictionary *_appCache;
    NSMutableDictionary *_nameCache;
    NSMutableDictionary *_pluginCache;
    NSMutableSet *_siriPlugins;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isSiriPlugin:(id)arg1;
- (void)_rebuildCache;
- (void)_addApplicationToCache:(id)arg1;
- (void)_logStatus;
- (id)_nameForUUID:(id)arg1 fromDict:(id)arg2 bundleId:(id *)arg3;
- (id)_bundleIDFromUUID:(id)arg1;
- (_Bool)_isPlaceholder:(id)arg1;
- (void)_removeApplicationFromCache:(id)arg1;
- (void)_appRegistrationChanged;
- (id)appNameForUUID:(id)arg1 bundleId:(id *)arg2;
- (id)lsBundleIDForUUID:(id)arg1;
- (void)_appRegistrationAdded:(id)arg1;
- (void)_appRegistrationRemoved:(id)arg1;
- (id)pluginNameForUUID:(id)arg1 bundleId:(id *)arg2;
- (void)_currentLocaleChanged;

@end
