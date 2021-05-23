/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSURLProtocol.h>

@class AMSMockURLOverride;

__attribute__((visibility("hidden")))
@interface AMSMockNetworkProxy : NSURLProtocol

{
    AMSMockURLOverride *_currentOverride;
}

@property (retain, nonatomic) AMSMockURLOverride *currentOverride;

+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)_overrides;
+ (void)_sync:(CDUnknownBlockType)arg1;
+ (id)_executedOverrides;
+ (void)_removeOverride:(id)arg1;
+ (id)registeredOverrides;
+ (id)executedOverrides;
+ (void)addOverride:(id)arg1;
+ (void)clearOverrides;
+ (void)removeOverride:(id)arg1;
+ (void)_removeAllOverrides;

- (void)finishWithError:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)finishWithData:(id)arg1;
- (void)performRedirectFromResponse:(id)arg1;

@end
