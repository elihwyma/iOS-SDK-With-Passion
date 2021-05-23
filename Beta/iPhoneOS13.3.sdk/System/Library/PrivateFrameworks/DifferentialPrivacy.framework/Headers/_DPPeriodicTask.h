/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface _DPPeriodicTask : NSObject

{
    unsigned long long _periodSeconds;
    NSString *_name;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_executionCriteria;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (nonatomic, readonly) unsigned long long periodSeconds;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CDUnknownBlockType handler;

+ (id)taskWithName:(id)arg1 period:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

- (id)init;
- (id)initWithName:(id)arg1 period:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
