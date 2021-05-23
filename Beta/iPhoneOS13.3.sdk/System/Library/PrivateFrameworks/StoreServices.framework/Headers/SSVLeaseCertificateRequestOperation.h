/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSObject, NSString, SSURLBag, SSVPlaybackLeaseConfiguration;

@protocol OS_dispatch_semaphore;

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation

{
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    CDUnknownBlockType _outputBlock;
    SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (copy) CDUnknownBlockType outputBlock;

- (void)cancel;
- (void)main;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)_resolveCertificateURLReturningError:(id *)arg1;

@end
