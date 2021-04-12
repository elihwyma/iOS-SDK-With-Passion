//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _KSSystemTask : NSObject
{
    NSUInteger _periodSeconds;
    NSString *_name;
    id /* CDUnknownBlockType */ _handler;
    double _maxRunTime;
    double _checkInTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_executionCriteria;
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *executionCriteria; // @synthesize executionCriteria=_executionCriteria;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double checkInTime; // @synthesize checkInTime=_checkInTime;
@property(nonatomic) double maxRunTime; // @synthesize maxRunTime=_maxRunTime;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUInteger periodSeconds; // @synthesize periodSeconds=_periodSeconds;
// - (void).cxx_destruct;
- (id)initWithName:(id)arg1 delay:(NSUInteger)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithName:(id)arg1 isPeriodic:(BOOL)arg2 period:(NSUInteger)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end

