/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class FMXPCServiceDescription, NSUUID, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface FMXPCSession : NSObject

{
    NSUUID *_identifier;
    id __proxy;
    NSObject<OS_dispatch_queue> *_serialQueue;
    FMXPCServiceDescription *_serviceDescription;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) id _proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) id proxy;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)destroyXPCConnection;
- (id)initWithServiceDescription:(id)arg1;

@end
