/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEOMirroredProgress.h>

@class NSMutableArray, NSObject;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_endpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remoteConnections;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;

- (void)dealloc;
- (void)cancel;
- (void)_update;
- (id)initWithMirroredProgress:(id)arg1;
- (void)_connectionDidInvalidate;
- (void)_broadcastOverXPCConnections:(id)arg1;
- (id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2;

@end
