/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <UIKit/UIView.h>

@class CKComponent, CKComponentDataSourceAttachState;

@interface UIView (CKComponent)

@property (retain, nonatomic, setter=ck_setComponent:) CKComponent *ck_component;
@property (retain, nonatomic, setter=ck_setAttachState:) CKComponentDataSourceAttachState *ck_attachState;
@property (nonatomic, getter=ck_isAsyncTransactionContainer, setter=ck_setAsyncTransactionContainer:) _Bool ck_asyncTransactionContainer;
@property (nonatomic, readonly) unsigned long long ck_asyncTransactionContainerState;

- (void)ck_cancelAsyncTransactions;
- (void)ck_asyncTransactionContainerStateDidChange;

@end
