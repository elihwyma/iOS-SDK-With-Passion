/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface AirPlayControllerServer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceName;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _performCommandBlock;
    CDUnknownBlockType _copyPropertyBlock;
    CDUnknownBlockType _setPropertyBlock;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType performCommandBlock;
@property (copy, nonatomic) CDUnknownBlockType copyPropertyBlock;
@property (copy, nonatomic) CDUnknownBlockType setPropertyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_connectionInvalidated:(id)arg1;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startWithXPCName:(id)arg1;

@end
