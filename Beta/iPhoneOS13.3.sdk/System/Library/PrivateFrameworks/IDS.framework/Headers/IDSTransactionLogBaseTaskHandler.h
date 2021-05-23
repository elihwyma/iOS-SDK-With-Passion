/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSTransactionLogTaskHandler.h>

@class IDSTransactionLogTask, NSObject;

@protocol OS_dispatch_queue;

@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler

{
    IDSTransactionLogTask *_task;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) IDSTransactionLogTask *task;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)perform;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end
