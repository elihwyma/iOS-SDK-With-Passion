/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTransactionalComponentDataSourceState;

@protocol CKTransactionalComponentDataSourceStateModifying;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject

{
    id <CKTransactionalComponentDataSourceStateModifying> _modification;
    CKTransactionalComponentDataSourceState *_state;
}

@property (nonatomic, readonly) id <CKTransactionalComponentDataSourceStateModifying> modification;
@property (nonatomic, readonly) CKTransactionalComponentDataSourceState *state;

- (id)initWithModification:(id)arg1 state:(id)arg2;

@end
