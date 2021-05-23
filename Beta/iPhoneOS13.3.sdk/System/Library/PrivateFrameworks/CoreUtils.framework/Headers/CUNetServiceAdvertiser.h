/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBonjourAdvertiser, CUNANPublisher, NSDictionary, NSSet, NSString, SFDeviceDiscovery;

@protocol OS_dispatch_queue;

@interface CUNetServiceAdvertiser : NSObject

{
    _Bool _activated;
    CUBonjourAdvertiser *_awdlBonjourAdvertiser;
    struct NSMutableDictionary *_bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    unsigned long long _bleDiscoveryFlags;
    CUBonjourAdvertiser *_infraBonjourAdvertiser;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    CUNANPublisher *_nanPublisher;
    struct LogCategory *_ucat;
    _Bool _updatePending;
    _Bool _blePeerFilterChanged;
    _Bool _portChanged;
    _Bool _serviceInfoChanged;
    _Bool _serviceTypeChanged;
    int _awdlControl;
    int _infraControl;
    int _nanControl;
    int _port;
    NSSet *_blePeerFilter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
}

@property (nonatomic) int awdlControl;
@property (copy, nonatomic) NSSet *blePeerFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int infraControl;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nanControl;
@property (nonatomic) int port;
@property (copy, nonatomic) NSDictionary *serviceInfo;
@property (copy, nonatomic) NSString *serviceType;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_updateLocked;
- (void)_awdlBonjourAdvertiserEnsureStarted;
- (void)_awdlBonjourAdvertiserEnsureStopped;
- (void)_bleTriggerEnsureStarted;
- (void)_bleTriggerEnsureStopped;
- (void)_bleTriggerDeviceFound:(id)arg1;
- (void)_bleTriggerDeviceLost:(id)arg1;
- (void)_infraBonjourAdvertiserEnsureStarted;
- (void)_infraBonjourAdvertiserEnsureStopped;
- (void)_nanAdvertiserEnsureStarted;
- (void)_nanAdvertiserEnsureStopped;

@end
