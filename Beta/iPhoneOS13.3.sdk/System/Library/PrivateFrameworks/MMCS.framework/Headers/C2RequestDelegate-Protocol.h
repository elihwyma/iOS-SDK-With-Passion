/*
 Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

#import <MMCS/Swift-Protocol.h>

@protocol C2RequestDelegate <Swift>

- (unsigned short)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:task:needNewBodyStream: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:task:didCompleteWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:dataTask:didReceiveData: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:dataTask:didReceiveResponse:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:task:_willSendRequestForEstablishedConnection:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:_taskIsWaitingForConnection: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:task:_conditionalRequirementsChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)URLSession:_willRetryBackgroundDataTask:withError: /* Error: Ran out of types for this method. */;

@end
