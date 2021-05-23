/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SBStatusBarStyleOverridesCoordinatorClient : NSObject

{
    int _registeredOverrides;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_registeredOverridesQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredOverridesQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int registeredOverrides;

- (void)acquireAssertionAndDeliverTapContextToClient:(id)arg1;
- (id)initWithConnection:(id)arg1 andStyleOverrides:(int)arg2;

@end
