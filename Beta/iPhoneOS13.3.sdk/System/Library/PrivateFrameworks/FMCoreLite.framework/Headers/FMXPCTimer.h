/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_xpc_object;

@interface FMXPCTimer : NSObject

{
    NSString *_name;
    NSDate *_date;
    double _gracePeriod;
    long long _priority;
    unsigned long long _options;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_duetActivitySchedulerData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double gracePeriod;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSObject<OS_xpc_object> *duetActivitySchedulerData;

- (void)invalidate;
- (void)schedule;
- (id)criteria;
- (CDUnknownBlockType)activityHandler;
- (void)handleActivity;
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;

@end
