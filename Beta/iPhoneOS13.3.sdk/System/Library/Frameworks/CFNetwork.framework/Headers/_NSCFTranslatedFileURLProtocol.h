/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol

{
    const struct CFURLProtocolInstanceCallbacks *_callbacks;
    struct CFURLProtocolClient _cfurlClient;
    const void *_info;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (const struct CFURLProtocolImplementation *)pimpl;

- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (struct CFURLProtocolClient *)cfurlClient;

@end
