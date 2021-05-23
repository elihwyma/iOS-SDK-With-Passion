/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetCache, AVAssetClientURLRequestHelper, AVAssetCustomURLAuthentication, AVAssetCustomURLBridgeForNSURLProtocol, AVAssetInspectorLoader, AVAssetResourceLoader, AVDispatchOnce, AVWeakReference, NSArray, NSDictionary, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVURLAssetInternal : NSObject

{
    AVAssetInspectorLoader *loader;
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVAssetCustomURLBridgeForNSURLProtocol *customURLBridgeForNSURLProtocol;
    AVAssetCustomURLAuthentication *customURLAuthenticationUsingKeychain;
    NSURL *URL;
    NSArray *tracks;
    AVAssetResourceLoader *resourceLoader;
    AVDispatchOnce *makeOneResourceLoaderOnly;
    AVAssetCache *assetCache;
    AVDispatchOnce *makeOneAssetDownloadCacheOnly;
    NSObject<OS_dispatch_queue> *tracksAccessQueue;
    NSDictionary *initializationOptions;
    _Bool hasInstanceIdentifierMapping;
    AVWeakReference *sessionReference;
}

@end
