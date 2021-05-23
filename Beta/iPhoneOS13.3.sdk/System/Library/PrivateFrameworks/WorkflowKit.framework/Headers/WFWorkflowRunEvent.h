/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRecord.h>

@class NSDate, NSString;

@interface WFWorkflowRunEvent : WFRecord

{
    NSString *_source;
    NSDate *_date;
    NSString *_triggerID;
    long long _outcome;
}

@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSString *triggerID;
@property (nonatomic, readonly) long long outcome;

@end
