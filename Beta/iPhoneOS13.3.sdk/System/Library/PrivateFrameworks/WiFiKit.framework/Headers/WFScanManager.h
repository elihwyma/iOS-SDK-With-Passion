/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, WFClient;

@protocol OS_dispatch_queue, WFScanManagerDelegate;

@interface WFScanManager : NSObject

{
    _Bool _doUnFilteredScanning;
    _Bool _supportsHotspotHelper;
    _Bool _supportsUnfilteredScanning;
    _Bool _hotspotHelperScanning;
    long long _state;
    double _scanInterval;
    unsigned long long _consecutiveZeroFilteredScanResults;
    unsigned long long _consecutiveZeroUnFilteredScanResults;
    id <WFScanManagerDelegate> _delegate;
    WFClient *_wifiClient;
    NSMutableSet *_networks;
    NSMutableArray *_scanQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_scanDispatchQueue;
    CDUnknownBlockType _singleScanBlock;
    NSMutableSet *_hotspotPluginNetworks;
}

@property (nonatomic) long long state;
@property (weak, nonatomic) id <WFScanManagerDelegate> delegate;
@property (nonatomic) double scanInterval;
@property (retain, nonatomic) WFClient *wifiClient;
@property (retain, nonatomic) NSMutableSet *networks;
@property (retain, nonatomic) NSMutableArray *scanQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanDispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType singleScanBlock;
@property (retain, nonatomic) NSMutableSet *hotspotPluginNetworks;
@property (nonatomic) _Bool supportsHotspotHelper;
@property (nonatomic) _Bool supportsUnfilteredScanning;
@property (nonatomic) _Bool hotspotHelperScanning;
@property unsigned long long consecutiveZeroFilteredScanResults;
@property unsigned long long consecutiveZeroUnFilteredScanResults;
@property _Bool doUnFilteredScanning;

- (id)init;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (id)_knownNetworks;
- (_Bool)_isScanning;
- (void)_scan;
- (id)initWithClient:(id)arg1 scanInterval:(double)arg2 delegate:(id)arg3;
- (id)hotspotHelperForScanRecord:(id)arg1;
- (void)_startHotspotPluginScan;
- (void)_cancelQueuedScan;
- (void)_stopNetworkPluginScan;
- (void)_queueScan;
- (void)_scanningWillStart;
- (void)_processNextScan;
- (void)_scanningDidFinishWithError:(id)arg1;
- (void)_updatePartialScanResults:(id)arg1;
- (void)_checkForNoNetworksFound;

@end
