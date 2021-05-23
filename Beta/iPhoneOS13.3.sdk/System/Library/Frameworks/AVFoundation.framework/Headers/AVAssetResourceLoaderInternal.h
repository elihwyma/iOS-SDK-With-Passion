/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetClientURLRequestHelper, AVAssetCustomURLBridgeForNSURLSession, AVWeakReference, NSMutableDictionary, NSOperationQueue, NSURLSession;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoaderInternal : NSObject

{
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVWeakReference *weakReferenceToAsset;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    struct OpaqueFigCustomURLLoader *customURLLoader;
    struct OpaqueFigCustomURLHandler *customURLHandler;
    struct OpaqueFigCustomURLHandler *authHandler;
    struct OpaqueFigCustomURLHandler *contentKeySessionCustomURLHandler;
    struct OpaqueFigXPCRemoteClient *remoteHandlerXPCRemoteClient;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSMutableDictionary *contentInformationCache;
    _Bool preloadsEligibleContentKeys;
    NSURLSession *URLSession;
    AVAssetCustomURLBridgeForNSURLSession *bridgeBetweenHandlerAndSession;
    NSOperationQueue *URLSessionOperationQueue;
}

@end
