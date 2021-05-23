/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

@class MISSING_TYPE;

@protocol CKAsyncTransactionContainer

@property (nonatomic, getter=ck_isAsyncTransactionContainer, setter=ck_setAsyncTransactionContainer:) _Bool ck_asyncTransactionContainer;
@property (nonatomic, readonly) unsigned long long ck_asyncTransactionContainerState;

- (MISSING_TYPE *)ck_cancelAsyncTransactions;
- (MISSING_TYPE *)ck_asyncTransactionContainerStateDidChange;

@end
