/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@protocol NSURLProtocolClient <Swift>

- (unsigned short)URLProtocol:wasRedirectedToRequest:redirectResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocol:cachedResponseIsValid: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocol:didReceiveResponse:cacheStoragePolicy: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocol:didLoadData: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocolDidFinishLoading: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocol:didFailWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocol:didReceiveAuthenticationChallenge: /* Error: Ran out of types for this method. */;
- (unsigned short)URLProtocol:didCancelAuthenticationChallenge: /* Error: Ran out of types for this method. */;

@end
