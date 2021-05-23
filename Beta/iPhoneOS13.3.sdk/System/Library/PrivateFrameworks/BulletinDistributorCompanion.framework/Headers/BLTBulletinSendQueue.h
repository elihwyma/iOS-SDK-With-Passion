/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/BLTBulletinSendQueuePassthrough.h>

@class BLTBulletinSendQueueAttachmentSender, BLTSendQueueSerializer, NSDate, NSMutableArray, NSNumber, NSObject, PBCodable, PCPersistentTimer;

@protocol OS_dispatch_queue;

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_queuedBlockHandlers;
    NSNumber *_timeout;
    PCPersistentTimer *_timeoutTimer;
    NSDate *_lastItemDate;
    PBCodable *_firstRequest;
    unsigned short _firstRequestType;
    NSDate *_lastQueueSendDate;
    BLTBulletinSendQueueAttachmentSender *_attachmentSender;
    BLTSendQueueSerializer *_queueSerializer;
}

- (id)init;
- (void)sendNow;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(_Bool)arg3 didSend:(CDUnknownBlockType)arg4;
- (_Bool)handleFileURL:(id)arg1;
- (void)queuePending;
- (void)_queue_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(_Bool)arg4 didSend:(CDUnknownBlockType)arg5 didQueue:(CDUnknownBlockType)arg6;
- (void)_queue_queuePending;
- (void)_queue_performSend;
- (void)_queue_startTimerWithFireDate:(id)arg1;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3 didQueue:(CDUnknownBlockType)arg4;

@end
