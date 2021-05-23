/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@class NSURLSession, NSURLSessionConfiguration;

@protocol __NSURLSessionTaskGroupForConfiguration <Swift>

@property (weak, readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (weak, readonly) NSURLSession *_groupSession;

- (unsigned short)dataTaskWithRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)dataTaskWithRequest:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadTaskWithStreamedRequest: /* Error: Ran out of types for this method. */;

@end
