/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, AVAssetResourceLoadingRequestor, NSString, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequest : NSObject

{
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (nonatomic, readonly) AVAssetResourceLoadingDataRequest *dataRequest;
@property (copy, nonatomic) NSURLResponse *response;
@property (copy, nonatomic) NSURLRequest *redirect;
@property (nonatomic, readonly) AVAssetResourceLoadingRequestor *requestor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (id)init;
- (void)dealloc;
- (_Bool)finished;
- (unsigned long long)_requestID;
- (id)_resourceLoader;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (id)_weakReference;
- (struct __CFDictionary *)_requestInfo;
- (void)_performCancellationByClient;
- (_Bool)_shouldInformDelegateOfFigCancellation;
- (id)initWithResourceLoader:(id)arg1 requestInfo:(struct __CFDictionary *)arg2 requestID:(unsigned long long)arg3;
- (struct OpaqueFigCustomURLHandler *)_customURLHandler;
- (struct OpaqueFigCustomURLLoader *)_customURLLoader;
- (struct OpaqueFigCustomURLHandler *)_contentKeySessionCustomURLHandler;
- (void)_sendDataToCustomURLHandler:(id)arg1;
- (void)_appendToCachedData:(id)arg1;
- (id)initWithResourceLoader:(id)arg1 URL:(id)arg2 httpRequestHeaders:(id)arg3 requestOffset:(id)arg4 requestLength:(id)arg5 allowedContentTypes:(id)arg6 figCryptor:(struct OpaqueFigCPECryptor *)arg7 cryptorKeyRequestID:(unsigned long long)arg8;
- (void)_setContentInformationRequest:(id)arg1;
- (void)_setDataRequest:(id)arg1;
- (_Bool)_tryToMarkAsCancelled;
- (_Bool)_isRequestForContentKey;
- (_Bool)_canSetOrUseCachedContentInformation;
- (void)_sendResponseInfoToCustomURLHandler;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (void)_cacheContentInformation:(id)arg1;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1;
- (_Bool)_contentKeySessionIsAttached;
- (void)forwardRequestToContentKeySession;
- (id)_getAndClearCachedData;
- (void)_sendFinishLoadingToCustomURLHandler;
- (id)keyRequestDataUsingCryptorForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 performAsync:(_Bool)arg4 error:(id *)arg5;
- (id)serializableRepresentation;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
