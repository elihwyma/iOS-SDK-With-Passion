/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@protocol NDBackgroundSessionClient <Swift>

- (unsigned short)backgroundTaskDidResume: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTaskDidSuspend: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:didReceiveChallenge:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:willBeginDelayedRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:willPerformHTTPRedirection:withNewRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:_willSendRequestForEstablishedConnection:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTaskHasConnectionWaiting: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:hasConnectionWaitingWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:hasConnectionWaitingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:didReceiveResponse:transactionMetrics: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:didReceiveResponse:transactionMetrics:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:didSendBodyData:totalBytesSent:totalBytesExpectedToSend: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:needNewBodyStream:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:didCompleteWithError:taskMetrics:info:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundDataTask:didReceiveData:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundTask:getAuthHeadersForResponse:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundDataTaskDidBecomeDownloadTask: /* Error: Ran out of types for this method. */;
- (unsigned short)willRetryBackgroundDataTask:withError:transactionMetrics: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundDownloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundDownloadTask:didResumeAtOffset:expectedTotalBytes: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundDownloadTask:didFinishDownloadingToURL:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)openFileAtPath:mode:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundAVAssetDownloadTaskDidUpdateProgress:totalBytesWritten:totalBytesExpectedToWrite: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundAVAssetDownloadTask:didReceiveDownloadToken: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundAVAssetDownloadTask:didLoadTimeRange:totalTimeRangesLoaded:timeRangeExpectedToLoad: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundAVAssetDownloadTask:didResolveMediaSelectionProperyList:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundAVAssetDownloadTask:willDownloadToURL: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundSessionDidStartAppWake:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundSessionDidFinishAppWake:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_getInitialCredentialDictionariesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_credentialsForProtectionSpace:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_allCredentialsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_setCredential:forProtectionSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_removeCredential:forProtectionSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_defaultCredentialForProtectionSpace:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)credStorage_setDefaultCredential:forProtectionSpace: /* Error: Ran out of types for this method. */;

@end
