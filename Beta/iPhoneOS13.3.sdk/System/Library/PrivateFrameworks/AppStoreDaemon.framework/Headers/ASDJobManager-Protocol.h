/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/Swift-Protocol.h>

@protocol ASDJobManager <Swift>

- (unsigned short)cancelJobsWithIDs:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseJobsWithIDs:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeJobsWithIDs:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)finishJobsWithIDs:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getJobsUsingReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getJobsWithIDs:usingReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)registerJobManagerWithOptions:replyBlock: /* Error: Ran out of types for this method. */;

@end
