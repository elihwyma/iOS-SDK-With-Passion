/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject

{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)_defaultPlugInPaths;
+ (id)sharedDatabase;
+ (id)sharedDatabaseIfExists;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)close;
- (id)plugins;
- (void)refresh;
- (void)setPlugInPaths:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (void)_removePlugin:(id)arg1;
- (id)_scanForNewPlugins;
- (void)_addPlugin:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (_Bool)isMIMETypeRegistered:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)destroyAllPluginInstanceViews;
- (id)_plugInPaths;

@end
