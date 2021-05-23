/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponentAnnouncerBase.h>

@interface CKTransactionalComponentDataSourceListenerAnnouncer : CKComponentAnnouncerBase

- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)transactionalComponentDataSource:(id)arg1 didModifyPreviousState:(id)arg2 byApplyingChanges:(id)arg3;

@end
