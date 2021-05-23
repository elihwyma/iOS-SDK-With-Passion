/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord

{
    _Bool _shouldPrompt;
    _Bool _enabled;
    NSData *_triggerData;
}

@property (copy, nonatomic) NSData *triggerData;
@property (nonatomic) _Bool shouldPrompt;
@property (nonatomic, getter=isEnabled) _Bool enabled;

@end
