/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestor, AVDispatchOnce, AVWeakReference, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLRequest, NSURLResponse;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingRequestInternal : NSObject

{
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    struct OpaqueFigCustomURLLoader *customURLLoader;
    struct OpaqueFigCustomURLHandler *customURLHandler;
    struct __CFDictionary *requestInfo;
    unsigned long long requestID;
    AVDispatchOnce *responseInfoSentOnceToken;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    CDUnknownBlockType streamingKeyRequestCompletionHandler;
    struct OpaqueFigCPECryptor *figCryptor;
    AVAssetResourceLoadingRequestor *requestor;
    unsigned long long cryptorKeyRequestID;
}

@end
