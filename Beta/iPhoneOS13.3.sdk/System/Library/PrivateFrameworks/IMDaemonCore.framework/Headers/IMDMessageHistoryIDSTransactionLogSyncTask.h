/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMDAccountController, NSMutableDictionary, NSString;

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject

{
    NSString *_className;
    IMDAccountController *_accountController;
    NSMutableDictionary *_taskGroupedByServiceName;
    CDUnknownBlockType _syncTaskCompletionBlock;
}

@property (retain, nonatomic) IMDAccountController *accountController;
@property (retain, nonatomic) NSMutableDictionary *taskGroupedByServiceName;
@property (copy, nonatomic) CDUnknownBlockType syncTaskCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAccountController:(id)arg1;
- (void)_setupAndBeginSync;
- (CDUnknownBlockType)_createProcessBatchBlockWithServiceSession:(id)arg1;
- (CDUnknownBlockType)_createKnownRecordBlock;
- (CDUnknownBlockType)_createSyncCompletionBlockForServiceSession:(id)arg1;
- (void)startSyncTask:(CDUnknownBlockType)arg1;
- (unsigned long long)syncTaskType;

@end
