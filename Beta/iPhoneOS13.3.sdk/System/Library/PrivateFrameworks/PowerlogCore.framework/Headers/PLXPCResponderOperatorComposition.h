/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PLOperator;

@protocol OS_dispatch_queue;

@interface PLXPCResponderOperatorComposition : NSObject

{
    NSDictionary *_registration;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak) PLOperator *operator;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSDictionary *registration;
@property (copy, nonatomic) CDUnknownBlockType operatorBlock;

- (id)description;
- (id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithWorkQueue:(id)arg1 withRegistration:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)respondToRequestForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4;

@end
