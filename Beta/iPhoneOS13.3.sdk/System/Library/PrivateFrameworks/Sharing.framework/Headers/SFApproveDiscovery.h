/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, SFDeviceDiscovery;

@protocol OS_dispatch_queue;

@interface SFApproveDiscovery : NSObject

{
    _Bool _activateCalled;
    CDUnknownBlockType _activateHandler;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    SFDeviceDiscovery *_deviceDiscovery;
    struct NSMutableDictionary *_deviceDictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_devices;
}

@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_discoveryEnsureStarted;
- (void)_discoveryEnsureStopped;
- (void)_discoveryFoundDevice:(id)arg1;
- (void)_discoveryLostDevice:(id)arg1;
- (void)_discoveryDeviceChanged:(id)arg1;
- (void)_activatedWithError:(id)arg1;

@end
