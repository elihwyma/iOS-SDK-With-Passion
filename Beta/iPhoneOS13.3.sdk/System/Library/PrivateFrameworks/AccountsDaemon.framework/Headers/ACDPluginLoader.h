/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@interface ACDPluginLoader : NSObject

+ (id)_currentSystemVersion;
+ (id)pluginBundlesAtSubpath:(id)arg1;
+ (id)_accountsPluginDirectoryURL:(id)arg1;
+ (id)_validatedBundleAtURL:(id)arg1;
+ (id)_buildPluginCache;
+ (id)pluginWithName:(id)arg1 inSubpath:(id)arg2;
+ (id)pluginForIdentifier:(id)arg1 subpath:(id)arg2;

@end
