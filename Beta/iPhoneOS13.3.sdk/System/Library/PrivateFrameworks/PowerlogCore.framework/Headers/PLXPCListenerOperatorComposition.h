/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PLOperator;

@interface PLXPCListenerOperatorComposition : NSObject

{
    NSDictionary *_registration;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
}

@property (weak) PLOperator *operator;
@property (readonly) NSDictionary *registration;
@property (copy, nonatomic) CDUnknownBlockType operatorBlock;

- (id)description;
- (id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)messageRecievedForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4;

@end
