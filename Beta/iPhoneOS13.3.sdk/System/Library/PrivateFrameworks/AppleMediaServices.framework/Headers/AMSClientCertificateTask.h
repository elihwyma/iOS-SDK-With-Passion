/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AMSKeychainOptions, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSClientCertificateTask : AMSTask

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AMSKeychainOptions *_options;
}

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) AMSKeychainOptions *options;

- (id)initWithOptions:(id)arg1;
- (id)performClientCertChainRequest;
- (id)_baaOptionsWithOptions:(id)arg1 error:(id *)arg2;

@end
