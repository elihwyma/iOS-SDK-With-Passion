/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <CFNetwork/NSURLProtocol.h>

@interface AAURLProtocol : NSURLProtocol

{
    unsigned long long _state;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)_normalizedRequestForURL:(id)arg1;

@end
