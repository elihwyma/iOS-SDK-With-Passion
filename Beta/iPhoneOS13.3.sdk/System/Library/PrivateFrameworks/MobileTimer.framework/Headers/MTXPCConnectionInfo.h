/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCInterface;

@interface MTXPCConnectionInfo : NSObject

{
    NSString *_machServiceName;
    NSXPCInterface *_remoteObjectInterface;
    id _exportedObject;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_lifecycleNotification;
    NSString *_requiredEntitlement;
    unsigned long long _options;
}

@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *exportedObjectInterface;
@property (copy, nonatomic) NSString *lifecycleNotification;
@property (copy, nonatomic) NSString *requiredEntitlement;
@property (nonatomic) unsigned long long options;

+ (id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;
+ (id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 options:(unsigned long long)arg3;

- (id)description;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;

@end
