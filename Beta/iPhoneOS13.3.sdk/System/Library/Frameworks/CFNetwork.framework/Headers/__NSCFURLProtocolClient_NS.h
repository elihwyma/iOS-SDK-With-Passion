/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString, NSURLAuthenticationChallenge;

@interface __NSCFURLProtocolClient_NS : NSObject

{
    struct URLProtocolClient *_cf;
    struct URLProtocol *_prot;
    NSURLAuthenticationChallenge *_challenge;
    struct _CFURLAuthChallenge *_cfChallenge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)challenge;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (id)initWithCFClient:(struct URLProtocolClient *)arg1 prot:(struct URLProtocol *)arg2;
- (void)withCustomProtocolScheduling:(CDUnknownBlockType)arg1;
- (void)teardown;
- (struct _CFURLAuthChallenge *)cfChallenge;

@end
