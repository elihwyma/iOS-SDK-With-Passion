/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMDaemonCore/Swift-Protocol.h>

@protocol IMDMessagePTaskStore <Swift>

- (unsigned short)loadMostRecentMessagePTasks;
- (unsigned short)deleteAllCompletedTasks;
- (unsigned short)updateTaskFlagsForPTask: /* Error: Ran out of types for this method. */;
- (unsigned short)storePTask: /* Error: Ran out of types for this method. */;

@end
