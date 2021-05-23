/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFFileRecordDescriptor.h>

@interface WFWorkflowFileDescriptor : WFFileRecordDescriptor

{
    _Bool _performMigration;
}

@property (nonatomic, readonly) _Bool performMigration;

- (id)initWithFile:(id)arg1 name:(id)arg2;
- (id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(_Bool)arg3;
- (id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(_Bool)arg3 sourceAppIdentifier:(id)arg4;

@end
