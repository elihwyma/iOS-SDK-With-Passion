/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@protocol SessionConnectionDelegate <Swift>

- (unsigned short)connection:wasRedirected:newRequest:responseCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:request:needsNewBodyStreamCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didReceiveResponse:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:willCacheResponse:responseCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didFinishCollectingMetrics:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)connectionWillFinishLoading: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didFinishLoadingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didReceiveConnectionCacheKey: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:challenged:authCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didReceiveData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:sentBodyBytes:totalBytes:expectedBytes: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:_willSendRequestForEstablishedConnection:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:waitingWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:_conditionalRequirementsChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didReceiveSocketInputStream:outputStream: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:needConnectedSocketToHost:port:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:didReceiveTCPConnection:extraBytes: /* Error: Ran out of types for this method. */;

@end
