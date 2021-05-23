/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMDCKSyncController, NSString;

@interface IMDMessageHistoryCKChatSyncTask : NSObject

{
    IMDCKSyncController *_ckSyncController;
    CDUnknownBlockType _syncTaskCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType syncTaskCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCKSyncController:(id)arg1;
- (void)startSyncTask:(CDUnknownBlockType)arg1;
- (unsigned long long)syncTaskType;
- (void)_startICloudSync;

@end
