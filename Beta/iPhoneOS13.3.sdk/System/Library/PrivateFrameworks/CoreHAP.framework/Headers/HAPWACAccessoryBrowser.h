/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class CUWiFiScanner, HMFTimer, NSDate, NSMutableSet, NSString;

@protocol HAPAirPlayAccessoryBrowserDelegate, HAPWACAccessoryBrowserDelegate;

@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser

{
    NSString *_browsingIdentifier;
    NSDate *_browsingStartTime;
    id <HAPAirPlayAccessoryBrowserDelegate> _airplayDelegate;
    NSString *_scanning2Pt4SSID;
    CDUnknownBlockType _found2Pt4Completion;
    id <HAPWACAccessoryBrowserDelegate> _delegate;
    NSMutableSet *_foundUnconfiguredUnpairedAccessories;
    NSMutableSet *_foundUnconfiguredPairedAccessories;
    NSMutableSet *_found2Pt4Networks;
    CUWiFiScanner *_cuWiFiScanner;
    unsigned long long _state;
    HMFTimer *_backoffTimer;
}

@property (retain, nonatomic) NSString *browsingIdentifier;
@property (retain, nonatomic) NSDate *browsingStartTime;
@property (weak, nonatomic) id <HAPAirPlayAccessoryBrowserDelegate> airplayDelegate;
@property (retain, nonatomic) NSString *scanning2Pt4SSID;
@property (copy, nonatomic) CDUnknownBlockType found2Pt4Completion;
@property (weak, nonatomic, readonly) id <HAPWACAccessoryBrowserDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *foundUnconfiguredUnpairedAccessories;
@property (retain, nonatomic) NSMutableSet *foundUnconfiguredPairedAccessories;
@property (retain, nonatomic) NSMutableSet *found2Pt4Networks;
@property (retain, nonatomic) CUWiFiScanner *cuWiFiScanner;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) HMFTimer *backoffTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (id)visible2Pt4Networks;
- (void)scan2Pt4APWithSSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;
- (void)_initWiFiScannerWithScanner:(id)arg1;
- (void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg1;
- (void)handleFoundAPDevice:(id)arg1;
- (void)handleFoundUnconfiguredPairedWACDevice:(id)arg1;
- (void)handleRemovedUnconfiguredWACDevice:(id)arg1;
- (void)handleChangeUnconfiguredWACDevice:(id)arg1;
- (void)_handleBrowsingBackOffTimerExpiry;
- (void)_reportFound2Pt4Network:(id)arg1;
- (void)_restartBrowsingWithAllNetworks;
- (void)_startBrowsingForWACAccessories;
- (void)_stopBrowsingForWACAccessories;
- (void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg1;
- (void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg1;
- (id)_removeUnconfiguredWACDevice:(id)arg1;
- (void)_handleUnconfiguredPairedWACDevice:(id)arg1;
- (void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg1;
- (void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg1;
- (void)initWiFiScannerWithScanner:(id)arg1;

@end
