/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface TRISequenceTask : NSObject

{
    NSMutableArray *_tasks;
    unsigned long long _currentTaskIndex;
    NSArray *_tags;
    _Bool success;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *tags;
@property (readonly) NSDate *startTime;
@property (readonly) NSArray *dependencies;

+ (_Bool)supportsSecureCoding;

- (int)run;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTags:(id)arg1;
- (void)addTask:(id)arg1;
- (id)nextTasksForRunStatus:(int)arg1;
- (id)initWithTasks:(id)arg1 index:(unsigned long long)arg2 tags:(id)arg3;

@end
