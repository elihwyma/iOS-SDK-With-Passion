/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface HDAsynchronousTask : NSObject

{
    _Bool _hasTimeout;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    CDUnknownBlockType _checkpointHandler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;
@property (nonatomic) _Bool hasTimeout;
@property (copy, nonatomic) CDUnknownBlockType checkpointHandler;

@end
