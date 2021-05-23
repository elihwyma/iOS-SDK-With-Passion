/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTransactionalComponentDataSourceAppliedChanges, CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceChange : NSObject

{
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceAppliedChanges *_appliedChanges;
}

@property (nonatomic, readonly) CKTransactionalComponentDataSourceState *state;
@property (nonatomic, readonly) CKTransactionalComponentDataSourceAppliedChanges *appliedChanges;

- (id)initWithState:(id)arg1 appliedChanges:(id)arg2;

@end
