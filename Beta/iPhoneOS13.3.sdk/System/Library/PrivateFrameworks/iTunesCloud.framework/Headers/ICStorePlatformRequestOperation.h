/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStorePlatformRequest, ICStoreURLRequest, NSObject;

@protocol OS_dispatch_queue;

@interface ICStorePlatformRequestOperation : ICAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    ICStorePlatformRequestOperation *_strongSelf;
    ICStorePlatformRequest *_platformRequest;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic, readonly) ICStorePlatformRequest *platformRequest;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)_requestContext;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_executePersonalized;
- (void)_executeUnpersonalized;
- (id)_URLRequestWithBaseURL:(id)arg1;
- (void)_enqueueDataRequest:(id)arg1;
- (id)initWithPlatformRequest:(id)arg1;

@end
