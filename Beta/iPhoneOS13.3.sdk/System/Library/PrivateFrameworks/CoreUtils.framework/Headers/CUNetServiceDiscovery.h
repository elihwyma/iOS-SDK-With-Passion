/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBonjourBrowser, CUNANSubscriber, NSSet, NSString, SFDeviceDiscovery, SFService;

@protocol OS_dispatch_queue;

@interface CUNetServiceDiscovery : NSObject

{
    _Bool _activated;
    unsigned char _bleActionType;
    SFService *_bleAdvertiser;
    struct NSMutableDictionary *_bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    NSString *_bleServiceIdentifier;
    struct NSMutableDictionary *_endpoints;
    CUBonjourBrowser *_infraBonjourBrowser;
    struct NSMutableDictionary *_infraBonjourDevices;
    unsigned int _infraBonjourBrowserID;
    struct NSMutableDictionary *_nanEndpoints;
    CUNANSubscriber *_nanSubscriber;
    unsigned int _nanSubscriberID;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    _Bool _updatePending;
    _Bool _blePeerFilterChanged;
    _Bool _serviceTypeChanged;
    int _awdlControl;
    unsigned int _bleDiscoveryFlags;
    unsigned int _changeFlags;
    int _infraControl;
    int _nanControl;
    NSSet *_blePeerFilter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _endpointChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) int awdlControl;
@property (nonatomic) unsigned int bleDiscoveryFlags;
@property (copy, nonatomic) NSSet *blePeerFilter;
@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int infraControl;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nanControl;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) CDUnknownBlockType endpointFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointLostHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

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
- (void)_bleTriggerEnsureStarted;
- (void)_bleTriggerEnsureStopped;
- (void)_bleTriggerDeviceFound:(id)arg1;
- (void)_bleTriggerDeviceLost:(id)arg1;
- (void)_bleScannerEnsureStarted;
- (void)_bleScannerEnsureStopped;
- (void)_infraBonjourBrowserEnsureStarted;
- (void)_infraBonjourBrowserEnsureStopped;
- (void)_infraBonjourDeviceFound:(id)arg1;
- (void)_infraBonjourDeviceLost:(id)arg1;
- (void)_infraBonjourDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_nanSubscriberEnsureStarted;
- (void)_nanSubscriberEnsureStopped;
- (void)_nanEndpointFound:(id)arg1;
- (void)_nanEndpointLost:(id)arg1;
- (void)_nanEndpointChanged:(id)arg1 changes:(unsigned int)arg2;

@end
