/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@class AMSPurchaseContext, NSObject;

@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder

{
    id <AMSBagProtocol> _bag;
    AMSPurchaseContext *_context;
    NSObject<OS_dispatch_queue> *_purchaseRequestQueue;
}

@property (nonatomic, readonly) AMSPurchaseContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue;

+ (long long)_anisetteTypeFromAccount:(id)arg1;
+ (id)_parametersFromContext:(id)arg1 error:(id *)arg2;
+ (void)configureRequest:(id)arg1 context:(id)arg2 bag:(id)arg3 error:(id *)arg4;

- (id)initWithContext:(id)arg1;
- (id)_bagURL;
- (id)bag;
- (void)setBag:(id)arg1;
- (id)initWithContext:(id)arg1 bag:(id)arg2;
- (id)encodeRequest;

@end
