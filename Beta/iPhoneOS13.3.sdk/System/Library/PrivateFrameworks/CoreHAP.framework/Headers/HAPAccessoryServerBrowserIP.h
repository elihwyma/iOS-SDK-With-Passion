/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class HAPWACAccessoryBrowser, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser

{
    struct BonjourBrowser *_bonjourBrowser;
    NSArray *_scanResults;
    NSMutableSet *_discoveredAccessoryServers;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_pendingBonjourEvents;
    HMFTimer *_bonjourEventTimer;
    HAPWACAccessoryBrowser *_hapWACBrowser;
}

@property (retain, nonatomic) NSMutableSet *discoveredAccessoryServers;
@property (weak, nonatomic) id <HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableSet *pendingBonjourEvents;
@property (retain, nonatomic) HMFTimer *bonjourEventTimer;
@property (retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser;
@property (copy, nonatomic) NSArray *scanResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;
- (void)timerDidFire:(id)arg1;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)visible2Pt4Networks;
- (void)stopDiscoveringWACAccessoryServersWithInvalidation:(_Bool)arg1;
- (id)wacBrowser;
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2;
- (void)startDiscoveringWACAccessoryServers;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (int)_initializeAndStartBonjourBrowser;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;
- (void)_invalidateWACServers;
- (int)_processPendingBonjourEvent:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(_Bool)arg2;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (int)_server:(id *)arg1 forBonjourDevice:(id)arg2;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (void)_invalidateAccessoryServers:(_Bool)arg1;
- (void)_setReachability:(_Bool)arg1 forServer:(id)arg2;
- (void)_invalidateAndRemoveAccessoryServer:(id)arg1;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_timerDidExpire:(id)arg1;
- (void)_server:(id *)arg1 forHAPWACAccessory:(id)arg2;
- (id)serverWithIdentifier:(id)arg1;
- (void)wacBrowser:(id)arg1 didFindHAPWACAccessory:(id)arg2;
- (void)wacBrowser:(id)arg1 didRemoveHAPWACAccessory:(id)arg2;
- (void)wacBrowser:(id)arg1 didFindUnconfiguredPairedHAPWACAccessory:(id)arg2;
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1;

@end
