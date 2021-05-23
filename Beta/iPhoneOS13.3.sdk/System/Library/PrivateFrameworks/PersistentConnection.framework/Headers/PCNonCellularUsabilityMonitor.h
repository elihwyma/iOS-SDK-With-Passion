/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class CUTWeakReference, NSString, PCInterfaceUsabilityMonitor;

@protocol OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCNonCellularUsabilityMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    NSString *_demoOverrideInterface;
    int _previousLinkQuality;
    _Bool _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    PCInterfaceUsabilityMonitor *_monitor;
}

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
@property (nonatomic, readonly) int currentRAT;
@property (nonatomic, readonly) _Bool isLTEWithCDRX;
@property (nonatomic, readonly) struct __CFString *wwanInterfaceName;
@property (nonatomic, readonly) NSString *networkCode;
@property (nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;

- (void)dealloc;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (void)_addMonitor;
- (void)_forwardConfigurationOnIvarQueue;
- (int)_linkQualityOnIvarQueue;
- (id)initWithDelegateQueue:(id)arg1;

@end
