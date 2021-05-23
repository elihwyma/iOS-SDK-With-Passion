/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, CUTWeakReference, CoreTelephonyClient, NSString, PCInterfaceUsabilityMonitor;

@protocol OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCWWANUsabilityMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    _Bool _isInCall;
    _Bool _isInHighPowerState;
    _Bool _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    int _currentRAT;
    int _powerlogCDRXToken;
    struct __CTServerConnection *_ctServerConnection;
    CoreTelephonyClient *_ctClient;
    int _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
}

@property (nonatomic, readonly) int currentRAT;
@property (nonatomic, readonly) _Bool isLTEWithCDRX;
@property (nonatomic, readonly) struct __CFString *wwanInterfaceName;
@property (nonatomic, readonly) NSString *networkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long interfaceIdentifier;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly) _Bool isInterfaceUsable;
@property (nonatomic, readonly) _Bool isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) _Bool isInternetReachable;
@property (retain, nonatomic, readonly) NSString *linkQualityString;
@property (nonatomic, readonly) _Bool isPoorLinkQuality;
@property (nonatomic, readonly) _Bool isBadLinkQuality;
@property (nonatomic, readonly) _Bool isRadioHot;
@property (nonatomic, readonly) _Bool isNetworkingPowerExpensiveToUse;
@property (nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;

- (void)dealloc;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)currentDataSimChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_processCallStatusChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (id)_currentDataSimContext;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (id)initWithDelegateQueue:(id)arg1;
- (void)_setupWWANMonitor;
- (void)_processDataConnectionStatus:(id)arg1 forContext:(id)arg2;
- (void)_processDataStatus:(id)arg1 forContext:(id)arg2;
- (_Bool)_isCurrentDataSimContextOnIvarQueue:(id)arg1;
- (void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3;

@end
