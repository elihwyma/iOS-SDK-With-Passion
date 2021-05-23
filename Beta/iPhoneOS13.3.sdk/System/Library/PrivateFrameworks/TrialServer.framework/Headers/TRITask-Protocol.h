/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol TRITask <Swift>

@property (readonly) NSArray *tags;
@property (readonly) NSDate *startTime;
@property (readonly) NSArray *dependencies;

- (unsigned short)run;
- (unsigned short)nextTasksForRunStatus: /* Error: Ran out of types for this method. */;

@end
