/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PROPlugInManager : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPlugInManager;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (void)scanForPlugInsInBundle:(id)arg1;
- (void)setPlugInSearchDirectories:(id)arg1;
- (void)scanForPlugIns;
- (id)plugInsForProtocol:(id)arg1;
- (id)plugInsForProtocols:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;
- (void)addPlugInSearchDirectory:(id)arg1;
- (_Bool)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2;
- (id)plugIns;
- (void)scanForPlugInsInDirectory:(id)arg1;
- (_Bool)requiresProtocolsToBePresentWhenLoading;
- (void)setRequiresProtocolsToBePresentWhenLoading:(_Bool)arg1;
- (id)plugInSearchDirectories;
- (void)removeAllPlugIns;
- (void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4;
- (void)addDocumentBlockedPlugin:(id)arg1;
- (_Bool)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id *)arg2;
- (void)getNameOverrides:(id)arg1 pluginName:(id *)arg2 bundleName:(id *)arg3;
- (void)removeAllBlockedDocumentPlugins;
- (void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2;
- (id)plugInGroups;
- (id)plugInGroupsMutable;
- (id)plugInWithUUID:(struct __CFUUID *)arg1;
- (id)plugInWithClassName:(id)arg1;
- (id)plugInGroupWithUUID:(struct __CFUUID *)arg1;
- (id)blockedLibraryPlugins;
- (id)blockedDocumentPlugins;
- (void)unregisterAPIForProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)loadBlockPluginList:(struct __CFString *)arg1;

@end
