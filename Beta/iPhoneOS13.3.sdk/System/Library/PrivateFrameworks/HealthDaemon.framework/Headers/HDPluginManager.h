/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, NSArray, NSDictionary;

@interface HDPluginManager : NSObject

{
    NSArray *_plugins;
    NSArray *_legacyPlugins;
    HDDaemon *_daemon;
    NSArray *_allowablePluginDirectoryPaths;
    NSDictionary *_legacyPluginsByIdentifier;
}

@property (retain, nonatomic) NSDictionary *legacyPluginsByIdentifier;
@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (id)pluginForIdentifier:(id)arg1;
- (id)pluginsForProtocol:(id)arg1;
- (id)initWithDaemon:(id)arg1;
- (id)pluginsConformingToProtocol:(id)arg1;
- (id)createExtensionsForDaemon:(id)arg1;
- (id)legacyPlugins;
- (id)createExtensionsForProfile:(id)arg1;
- (id)_builtInPluginClasses;
- (void)_loadPlugins;
- (id)_pluginsDirectoryPath;
- (id)_internalPluginsDirectoryPaths;
- (id)_pluginDirectoryPaths;
- (id)_principalClassProtocols;
- (id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id *)arg3;
- (id)_pluginClasses;
- (id)_createPluginsFromClasses:(id)arg1;
- (id)_createLegacyPluginsFromClasses:(id)arg1;
- (Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2;

@end
