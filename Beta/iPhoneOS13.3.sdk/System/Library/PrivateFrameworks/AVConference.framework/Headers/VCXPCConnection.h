/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface VCXPCConnection : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    int _pid;
    id context;
    NSData *tokenData;
    NSObject<OS_os_transaction> *_transaction;
    _Bool _isPersistent;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_timeoutTimerQueue;
    struct OpaqueFigCFWeakReferenceHolder *_timeoutTimerContext;
    NSString *_lastCalledApiName;
    _Bool _timeoutTimerStarted;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property int pid;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *tokenData;
@property (retain, nonatomic) NSString *lastCalledApiName;
@property (getter=isPersistent) _Bool persistent;

+ (void)selfTerminateDueToTimeout:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)destroyTimeoutTimer;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)createTimeoutTimer;

@end
