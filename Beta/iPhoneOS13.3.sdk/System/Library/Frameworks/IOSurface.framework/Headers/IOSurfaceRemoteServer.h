/*
 Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface IOSurfaceRemoteServer : NSObject

{
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_clients;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *clients;

- (void)dealloc;
- (void)shutdown;
- (void)_handleClientConnection:(id)arg1;
- (void)_handleClientDisconnected:(id)arg1;
- (id)initWithListener:(id)arg1 options:(id)arg2;

@end
