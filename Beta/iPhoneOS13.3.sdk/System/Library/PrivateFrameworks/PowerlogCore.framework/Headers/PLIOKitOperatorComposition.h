/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSString, PLOperator;

@interface PLIOKitOperatorComposition : NSObject

{
    unsigned int _notificationRef;
    unsigned int _service;
    unsigned int _iterator;
    unsigned int _conn;
    struct IONotificationPort *_ioNotifyPort;
    NSString *_serviceName;
    NSString *_serviceClassName;
    CDUnknownBlockType _operatorBlock;
    CDUnknownBlockType _matchBlock;
    PLOperator *_operator;
}

@property (retain) PLOperator *operator;
@property struct IONotificationPort *ioNotifyPort;
@property unsigned int notificationRef;
@property unsigned int service;
@property (retain) NSString *serviceName;
@property (retain) NSString *serviceClassName;
@property unsigned int iterator;
@property unsigned int conn;
@property (copy, nonatomic) CDUnknownBlockType operatorBlock;
@property (copy, nonatomic) CDUnknownBlockType matchBlock;

+ (id)snapshotFromIOEntry:(unsigned int)arg1;
+ (id)snapshotFromIOEntry:(unsigned int)arg1 forKey:(id)arg2;

- (void)dealloc;
- (id)properties;
- (id)initWithOperator:(id)arg1 forService:(id)arg2;
- (id)initWithOperator:(id)arg1 forService:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)propertiesForKey:(id)arg1;
- (id)initWithOperator:(id)arg1 forServiceClass:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forServiceClass:(id)arg2;
- (id)propertiesFromIOEntry:(unsigned int)arg1 forKey:(id)arg2;
- (id)propertiesFromIOEntry:(unsigned int)arg1;
- (id)initWithOperator:(id)arg1 forDynamicServiceClass:(id)arg2 forNotificationType:(char [128])arg3 withMatchBlock:(CDUnknownBlockType)arg4;

@end
