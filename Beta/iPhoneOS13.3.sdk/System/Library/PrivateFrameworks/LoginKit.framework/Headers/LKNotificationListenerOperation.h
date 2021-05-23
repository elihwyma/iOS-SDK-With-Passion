/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSOperation.h>

@interface LKNotificationListenerOperation : NSOperation

{
    _Bool _operationExecuting;
    _Bool _operationFinished;
    _Bool _operationCancelled;
    _Bool _operationReady;
    int _notifyToken;
    CDUnknownBlockType _listenerStartedBlock;
    unsigned long long _notificationType;
    double _timeOutPeriod;
    CDUnknownBlockType _notificationListenerCompletionBlock;
}

@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) double timeOutPeriod;
@property (copy, nonatomic) CDUnknownBlockType notificationListenerCompletionBlock;
@property (nonatomic) _Bool operationExecuting;
@property (nonatomic) _Bool operationFinished;
@property (nonatomic) _Bool operationCancelled;
@property (nonatomic) _Bool operationReady;
@property (nonatomic) int notifyToken;
@property (copy, nonatomic) CDUnknownBlockType listenerStartedBlock;

- (void)cancel;
- (void)start;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)_endOperation;
- (id)_errorForNotificationType:(unsigned long long)arg1;
- (id)_notificationForNotificationType:(unsigned long long)arg1;
- (id)initWithNotificationType:(unsigned long long)arg1 timeOutPeriod:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
