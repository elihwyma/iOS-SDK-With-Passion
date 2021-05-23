/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <AdCore/ADIDManager.h>

@class NSString;

@interface ADIDManager (Private)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (id)save;
- (void)prepareForPushNotification;
- (void)reconcile:(CDUnknownBlockType)arg1;
- (void)setReconcileOperations:(id)arg1;
- (_Bool)scheduleReconciliation:(double)arg1;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (void)setDSID:(id)arg1 withoutRestrictions:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecords:(CDUnknownBlockType)arg1;
- (id)storableUsageVectors;
- (id)saveAndNotifyIfNecessary;
- (void)notifyActiveRecordChanged;
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)updateAccountData:(CDUnknownBlockType)arg1;
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkForLateReconcile;
- (void)incrementMonthlyResetCount;
- (void)updateUsageVectors:(id)arg1;
- (void)performOperationWhenNotReconciling:(CDUnknownBlockType)arg1;
- (void)performOperationAfterReconcile:(CDUnknownBlockType)arg1;
- (void)handleAccountChange:(CDUnknownBlockType)arg1;
- (void)cancelPendingReconcile;
- (_Bool)runTask:(id)arg1;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (_Bool)reconcileInProgress;
- (id)reconcileOperations;

@end
