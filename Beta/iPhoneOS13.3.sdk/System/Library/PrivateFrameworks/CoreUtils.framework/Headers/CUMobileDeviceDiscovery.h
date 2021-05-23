/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CURunLoopThread;

@protocol OS_dispatch_queue;

@interface CUMobileDeviceDiscovery : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
    unsigned int _changeFlags;
    unsigned int _discoveryFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int discoveryFlags;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;

+ (void)getDevicesWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)activate;
- (void)_mdThreadInitialize;
- (void)_mdThreadFinalize;

@end
