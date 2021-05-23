/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVOperation.h>

@class NSData, NSObject, NSString, SSURLBag, SSVPlaybackLeaseConfiguration, SSVPlaybackLeaseRequest;

@protocol OS_dispatch_semaphore;

@interface SSVLeaseRequestOperation : SSVOperation

{
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSString *_bagKey;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    CDUnknownBlockType _outputBlock;
    SSVPlaybackLeaseRequest *_request;
    unsigned long long _retryCount;
    SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (copy, readonly) SSVPlaybackLeaseRequest *leaseRequest;
@property (copy) CDUnknownBlockType outputBlock;

- (void)cancel;
- (void)main;
- (id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2;
- (id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2;
- (_Bool)_resolveConfigurationAndURLReturningError:(id *)arg1;
- (_Bool)_loadCertificateDataIfNecessary:(id *)arg1;
- (_Bool)_shouldRetryForError:(id)arg1;

@end
