/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBasePluginPackage : NSObject

{
    NSMutableSet *pluginDatabases;
    struct String path;
    struct PluginInfo pluginInfo;
    struct RetainPtr<__CFBundle *> cfBundle;
    CDUnknownFunctionPointerType BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)arg1;

- (void)dealloc;
- (_Bool)load;
- (const struct String *)path;
- (void)unload;
- (struct String)bundleIdentifier;
- (id)initWithPath:(id)arg1;
- (unsigned int)versionNumber;
- (id)MIMETypeForExtension:(const struct String *)arg1;
- (id).cxx_construct;
- (struct String)bundleVersion;
- (_Bool)isQuickTimePlugIn;
- (void)createPropertyListFile;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (id)pListForPath:(id)arg1 createFile:(_Bool)arg2;
- (_Bool)getPluginInfoFromPLists;
- (const struct PluginInfo *)pluginInfo;
- (_Bool)supportsExtension:(const struct String *)arg1;
- (_Bool)supportsMIMEType:(const struct String *)arg1;
- (_Bool)isJavaPlugIn;
- (_Bool)isNativeLibraryData:(id)arg1;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (void)wasRemovedFromPluginDatabase:(id)arg1;

@end
