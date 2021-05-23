/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFWorkflowRecord;

@interface WFWorkflowCreationOptions : NSObject

{
    _Bool _deleted;
    WFWorkflowRecord *_record;
    NSString *_identifier;
    unsigned long long _location;
}

@property (nonatomic, readonly) WFWorkflowRecord *record;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long location;
@property (nonatomic) _Bool deleted;

- (id)init;
- (id)initWithRecord:(id)arg1;

@end
