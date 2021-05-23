/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, OFReachability;

@protocol OS_dispatch_queue;

@interface OKProducerManager : NSObject

{
    NSMutableDictionary *_extentionClassNames;
    NSMutableDictionary *_installedPlugins;
    NSMutableDictionary *_installedContents;
    OFReachability *_reachability;
    long long _reachabilityStatus;
    NSObject<OS_dispatch_queue> *_serialCloudServicePreparationQueue;
    _Bool _cloudServicePreparing;
    _Bool _cloudServicePrepared;
    _Bool _cloudServiceAutomaticUpdates;
    NSOperationQueue *_cloudServiceOperationQueue;
    long long _minimumNetworkStatusForDownloads;
    NSObject<OS_dispatch_queue> *_producerAccessQueue;
}

@property (nonatomic) _Bool cloudServiceAutomaticUpdates;
@property (nonatomic) long long minimumNetworkStatusForDownloads;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)hasPluginWithIdentifier:(id)arg1;
- (id)installedPluginWithIdentifier:(id)arg1;
- (id)allPluginsIdentifiers;
- (Class)registeredClassFromString:(id)arg1;
- (id)localizedNameForPluginIdentifier:(id)arg1;
- (id)audioURLsForPluginIdentifier:(id)arg1;
- (id)backgroundColorForPluginIdentifier:(id)arg1;
- (_Bool)hasInstalledPluginAndContentWithIdentifier:(id)arg1;
- (void)registerOpusKitClasses;
- (void)refreshInstalledPlugins;
- (void)refreshInstalledContents;
- (void)prepareCloudServiceIfNeeded;
- (void)_performAsynchronousProducerAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)userLibraryPlugInsDirectoryURL;
- (id)_installedURLsInDirectoryURL:(id)arg1 withExtension:(id)arg2;
- (id)_pluginFromURL:(id)arg1;
- (void)registerExtensionClassName:(id)arg1 forPluginIdentifier:(id)arg2;
- (id)_contentFromURL:(id)arg1;
- (void)unregisterExtensionClassName:(id)arg1 forPluginIdentifier:(id)arg2;
- (id)_allBundlesURLsWithExtention:(id)arg1;
- (id)installedContentWithIdentifier:(id)arg1;
- (_Bool)hasInstalledContentWithIdentifier:(id)arg1;
- (_Bool)hasInstalledPluginWithIdentifier:(id)arg1;
- (id)_contentWithIdentifier:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)addPluginFromURL:(id)arg1;
- (id)addContentFromURL:(id)arg1;
- (void)pluginWithIdentifier:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)performAsynchronousProducerAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)createPresentationWithPluginIdentifier:(id)arg1 guidelines:(id)arg2 mediaFeeder:(id)arg3 mediaItemLookupDelegate:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)createDocumentAtFileURL:(id)arg1 withPluginIdentifier:(id)arg2 guidelines:(id)arg3 mediaURLs:(id)arg4 mediaItemLookupDelegate:(id)arg5 flattenMedia:(_Bool)arg6 flattenProducer:(_Bool)arg7 prepareCaches:(_Bool)arg8 format:(unsigned long long)arg9 keepOpen:(_Bool)arg10 documentClass:(Class)arg11 progressBlock:(CDUnknownBlockType)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (void)_closeAndDeleteDocument:(id)arg1 fileURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_closeDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_saveDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_openDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_saveDocument:(id)arg1 toFileURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)libraryPlugInsDirectoryURL;
- (id)allInstalledPlugins;
- (id)allInstalledContents;
- (id)installedPluginsNames;
- (id)installedPluginAtURL:(id)arg1;
- (id)installedContentAtURL:(id)arg1;
- (id)installedPluginWithName:(id)arg1;
- (id)installedPluginsWithFamily:(unsigned long long)arg1;
- (id)loadedPlugins;
- (id)loadedContents;
- (id)pluginWithLoadedClass:(Class)arg1;
- (void)waitUntilCloudServicePrepared:(double)arg1;
- (id)allContentsIdentifiers;
- (double)versionForPluginIdentifier:(id)arg1;
- (double)versionForContentIdentifier:(id)arg1;
- (struct CGImage *)previewImageRefForPluginIdentifier:(id)arg1;
- (_Bool)hasContentWithIdentifier:(id)arg1;
- (void)contentWithIdentifier:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)installPluginAtURL:(id)arg1 overwrite:(_Bool)arg2 error:(id *)arg3;
- (id)installContentAtURL:(id)arg1 overwrite:(_Bool)arg2 error:(id *)arg3;
- (_Bool)uninstallPluginWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)uninstallContentWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)createPresentationWithPreset:(id)arg1 guidelines:(id)arg2 mediaFeeder:(id)arg3 mediaItemLookupDelegate:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)createDocumentAtDirectoryURL:(id)arg1 withPluginIdentifier:(id)arg2 guidelines:(id)arg3 mediaURLs:(id)arg4 mediaItemLookupDelegate:(id)arg5 flattenMedia:(_Bool)arg6 flattenProducer:(_Bool)arg7 prepareCaches:(_Bool)arg8 format:(unsigned long long)arg9 keepOpen:(_Bool)arg10 documentClass:(Class)arg11 progressBlock:(CDUnknownBlockType)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (void)authorDocument:(id)arg1 withPluginIdentifier:(id)arg2 guidelines:(id)arg3 flattenMedia:(_Bool)arg4 flattenProducer:(_Bool)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end
