/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@protocol RWIProtocolNetworkDomainHandler <Swift>

- (unsigned short)enableWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)setExtraHTTPHeadersWithErrorCallback:successCallback:headers: /* Error: Ran out of types for this method. */;
- (unsigned short)getResponseBodyWithErrorCallback:successCallback:requestId: /* Error: Ran out of types for this method. */;
- (unsigned short)setResourceCachingDisabledWithErrorCallback:successCallback:disabled: /* Error: Ran out of types for this method. */;
- (unsigned short)loadResourceWithErrorCallback:successCallback:frameId:url: /* Error: Ran out of types for this method. */;
- (unsigned short)getSerializedCertificateWithErrorCallback:successCallback:requestId: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveWebSocketWithErrorCallback:successCallback:requestId:objectGroup: /* Error: Ran out of types for this method. */;

@end
