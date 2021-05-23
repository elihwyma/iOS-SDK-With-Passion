/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface CUTDSDaemon : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    struct NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    NSString *_xpcServiceName;
}

@property (copy, nonatomic) NSString *xpcServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedTDSDaemon;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidated;
- (void)activate;
- (void)_xpcConnectionInvalidated:(id)arg1;

@end
