/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class PLOperator;

@interface PLHIDEventOperatorComposition : NSObject

{
    struct __IOHIDEventSystemClient *_eventSystemClient;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
}

@property (retain) PLOperator *operator;
@property struct __IOHIDEventSystemClient *eventSystemClient;
@property (copy, nonatomic) CDUnknownBlockType operatorBlock;

- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithOperator:(id)arg1 forUsagePage:(unsigned long long)arg2 andUsage:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;

@end
