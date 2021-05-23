/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCInterface;

@interface FMXPCServiceDescription : NSObject

{
    NSString *_machService;
    unsigned long long _options;
    NSObject *_exportedObject;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic) NSString *machService;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSObject *exportedObject;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)initInternalWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 remoteObjectInterface:(id)arg3 interruptionHandler:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;

@end
