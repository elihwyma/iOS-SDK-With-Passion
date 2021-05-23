/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AMSBiometricsSignatureRequest;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureTask : AMSTask

{
    AMSBiometricsSignatureRequest *_request;
}

@property (nonatomic, readonly) AMSBiometricsSignatureRequest *request;

- (id)initWithRequest:(id)arg1;
- (id)performSignature;

@end
