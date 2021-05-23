/*
 Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@protocol ClientSessionInterface

- (unsigned short)setSessionInfo:userInfo:frameworksToCheck:hasAggregationBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)startConfigWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchStatesWithUserInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDisplayURL: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMessageWithDictionary:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)flushMessagesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)finishSessionGracefully;
- (unsigned short)uploadFileAtPath:extensionToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadLogData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMessageWithSessionInfo:userInfo:category:type:payload:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSharedDataWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSharedDataForKey:value: /* Error: Ran out of types for this method. */;
- (unsigned short)setDigestKey:algorithm: /* Error: Ran out of types for this method. */;

@end
