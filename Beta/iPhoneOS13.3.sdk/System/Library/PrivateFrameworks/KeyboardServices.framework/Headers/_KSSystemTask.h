/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface _KSSystemTask : NSObject

{
    unsigned long long _periodSeconds;
    NSString *_name;
    CDUnknownBlockType _handler;
    double _maxRunTime;
    double _checkInTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_executionCriteria;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (nonatomic, readonly) unsigned long long periodSeconds;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CDUnknownBlockType handler;
@property (nonatomic) double maxRunTime;
@property (nonatomic) double checkInTime;

- (id)init;
- (id)initWithName:(id)arg1 isPeriodic:(_Bool)arg2 period:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
