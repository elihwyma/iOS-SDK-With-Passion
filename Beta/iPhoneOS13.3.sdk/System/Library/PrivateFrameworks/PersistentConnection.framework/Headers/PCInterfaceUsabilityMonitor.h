/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class CUTWeakReference, NSMutableArray, NSRecursiveLock, NSString;

@protocol OS_dispatch_queue, OS_nw_interface, OS_nw_parameters, OS_nw_path_evaluator, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCInterfaceUsabilityMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    long long _interfaceIdentifier;
    CUTWeakReference *_delegateReference;
    NSObject<OS_nw_parameters> *_pathParameters;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_interface> *_lastInterface;
    NSObject<OS_nw_interface> *_lastDelegateInterface;
    _Bool _isPathSatisfied;
    void *_dynamicStore;
    struct __CFRunLoopSource *_linkQualitySource;
    struct __CFString *_lqKey;
    int _linkQuality;
    _Bool _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_offTransitions;
    NSRecursiveLock *_recursiveLock;
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

+ (_Bool)isBadLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;
+ (_Bool)isPoorLinkQuality:(int)arg1;

- (id)init;
- (void)dealloc;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_createPathEvaluator;
- (void)_unscheduleLinkQualityMonitor;
- (void)_unschedulePathEvaluator;
- (void)_flushStaleTransitions;
- (_Bool)_isInterfaceUsable;
- (_Bool)_isInterfaceHistoricallyUsable;
- (void)_pathUpdate:(id)arg1;
- (_Bool)_createLinkQualityMonitor:(_Bool)arg1;
- (void)_updateOffTransitionsForLinkQualityChange;
- (void)_processLinkQualityUpdateWithChangedKey:(id)arg1 updatedLinkQuality:(int)arg2;
- (void)_dynamicStoreCallback:(id)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (id)initWithInterfaceIdentifier:(long long)arg1 delegateQueue:(id)arg2;
- (id)currentInterfaceName;
- (void)_dynamicStoreCallbackForKeys:(id)arg1;

@end
