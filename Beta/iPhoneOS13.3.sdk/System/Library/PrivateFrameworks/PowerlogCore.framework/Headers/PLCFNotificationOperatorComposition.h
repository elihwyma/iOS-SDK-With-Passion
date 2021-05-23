/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSString, PLOperator;

@protocol OS_dispatch_queue;

@interface PLCFNotificationOperatorComposition : NSObject

{
    _Bool _listeningForNotifications;
    _Bool _isStateRequired;
    int _stateToken;
    NSString *_notificationName;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak) PLOperator *operator;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property _Bool isStateRequired;
@property int stateToken;
@property _Bool listeningForNotifications;
@property (retain) NSString *notificationName;
@property (copy, nonatomic) CDUnknownBlockType operatorBlock;

- (void)dealloc;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 requireState:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
- (_Bool)listenForNotifications:(_Bool)arg1;

@end
