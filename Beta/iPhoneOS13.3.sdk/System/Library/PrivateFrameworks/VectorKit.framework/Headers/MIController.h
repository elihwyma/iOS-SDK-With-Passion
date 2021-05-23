/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class VKMapView;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface MIController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
    _Bool _isActive;
}

@property (nonatomic, readonly) _Bool isActive;

+ (id)sharedController;

- (id)init;
- (void)sendData:(id)arg1;
- (void)activateController:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (void)recievedData:(id)arg1;
- (void)deactivateController;
- (void)decodeDebugTreeData:(id)arg1;

@end
