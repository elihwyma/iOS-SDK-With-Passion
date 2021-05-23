/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PLOperator;

@interface PLIOHIDOperatorComposition : NSObject

{
    struct __IOHIDEventSystemClient *_eventSystemClient;
    NSArray *_serviceClients;
    NSString *_serviceName;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
}

@property (retain) PLOperator *operator;
@property struct __IOHIDEventSystemClient *eventSystemClient;
@property (retain) NSArray *serviceClients;
@property (retain) NSString *serviceName;
@property (copy, nonatomic) CDUnknownBlockType operatorBlock;

- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)initWithOperator:(id)arg1 forService:(id)arg2;
- (id)initWithOperator:(id)arg1 forService:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
