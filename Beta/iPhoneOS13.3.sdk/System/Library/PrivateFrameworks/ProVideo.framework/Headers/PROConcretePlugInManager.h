/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PROPlugInManager.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, PROReadWriteLock;

@interface PROConcretePlugInManager : PROPlugInManager

{
    NSMutableDictionary *protocols;
    NSMutableDictionary *groupsDictionary;
    NSMutableDictionary *bundlesDictionary;
    NSMutableDictionary *uuids;
    NSMutableDictionary *classesDictionary;
    NSMutableArray *plugIns;
    NSMutableDictionary *api;
    PROReadWriteLock *apiLock;
    NSMutableArray *plugInSearchDirectories;
    NSMutableDictionary *blockedLibraryPlugins;
    NSMutableDictionary *blockedDocumentPlugins;
    id delegate;
    struct {
        unsigned int respondsToDidError:1;
        unsigned int respondsToDidPlugInDidError:1;
        unsigned int respondsToShouldLoadBundle:1;
        unsigned int respondsToShouldLoadPlugIn:1;
        unsigned int respondsToDidLoadPlugIn:1;
        unsigned int useStrictLoading:1;
    } managerFlags;
    NSRecursiveLock *mutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)reportError:(id)arg1;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (void)scanForPlugInsInBundle:(id)arg1;
- (void)setPlugInSearchDirectories:(id)arg1;
- (void)scanForPlugIns;
- (id)plugInsForProtocol:(id)arg1;
- (id)plugInsForProtocols:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;
- (void)addPlugInSearchDirectory:(id)arg1;
- (id)newBlockPluginList:(struct __CFString *)arg1;
- (_Bool)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2;
- (id)plugIns;
- (void)addPlugIn:(id)arg1;
- (void)mergeGroupsDictionaryWith:(id)arg1;
- (void)scanForPlugInsInDirectory:(id)arg1;
- (_Bool)shouldLoadBundle:(id)arg1;
- (void)scanForPlugInsInBundleHelper:(id)arg1 zone:(struct _NSZone *)arg2 withPluginKitPlugIn:(id)arg3;
- (_Bool)shouldLoadPlugIn:(id)arg1;
- (_Bool)requiresProtocolsToBePresentWhenLoading;
- (id)apiForProtocol:(id *)arg1 versions:(id)arg2;
- (_Bool)validateProtocols:(id)arg1;
- (_Bool)bundleHandler:(id)arg1 shouldAddPlugIn:(id)arg2;
- (void)bundleHandler:(id)arg1 didAddPlugIn:(id)arg2;
- (void)bundleHandler:(id)arg1 didError:(id)arg2;
- (void)setRequiresProtocolsToBePresentWhenLoading:(_Bool)arg1;
- (void)insertObject:(id)arg1 inPlugInSearchDirectoriesAtIndex:(unsigned int)arg2;
- (void)removeObjectFromPlugInSearchDirectoriesAtIndex:(unsigned int)arg1;
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
- (unsigned int)countOfBundles;
- (id)objectInBundlesAtIndex:(unsigned int)arg1;
- (void)unregisterAPIForProtocol:(id)arg1 version:(unsigned int)arg2;

@end
