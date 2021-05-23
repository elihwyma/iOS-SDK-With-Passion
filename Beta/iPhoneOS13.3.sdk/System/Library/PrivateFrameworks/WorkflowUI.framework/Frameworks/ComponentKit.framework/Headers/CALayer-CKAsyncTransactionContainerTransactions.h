/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <QuartzCore/CALayer.h>

@class CKAsyncTransaction, NSHashTable;

@interface CALayer (CKAsyncTransactionContainerTransactions)

@property (retain, nonatomic, setter=ck_setAsyncLayerTransactions:) NSHashTable *ck_asyncLayerTransactions;
@property (retain, nonatomic, setter=ck_setCurrentAsyncLayerTransaction:) CKAsyncTransaction *ck_currentAsyncLayerTransaction;
@property (retain, nonatomic, readonly) CKAsyncTransaction *ck_asyncTransaction;
@property (retain, nonatomic, readonly) CALayer *ck_parentTransactionContainer;
@property (nonatomic, getter=ck_isAsyncTransactionContainer, setter=ck_setAsyncTransactionContainer:) _Bool ck_asyncTransactionContainer;
@property (nonatomic, readonly) unsigned long long ck_asyncTransactionContainerState;
@property (nonatomic, setter=ck_setAllowsHighlightDrawing:) _Bool ck_allowsHighlightDrawing;

- (void)ck_cancelAsyncTransactions;
- (void)ck_asyncTransactionContainerStateDidChange;
- (void)ck_asyncTransactionContainerWillBeginTransaction:(id)arg1;
- (void)ck_asyncTransactionContainerDidCompleteTransaction:(id)arg1;

@end
