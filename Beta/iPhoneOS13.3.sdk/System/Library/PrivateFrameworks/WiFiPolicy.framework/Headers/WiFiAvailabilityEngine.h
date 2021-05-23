/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSSet, WiFiLexicon;

@protocol OS_dispatch_queue, WiFiLocationProvider, WiFiScanProvider;

@interface WiFiAvailabilityEngine : NSObject

{
    double _availabilityMatchMaximumAge;
    NSSet *_providers;
    NSSet *_sources;
    NSSet *_availableNetworks;
    CDUnknownBlockType _availabilityChangedCallback;
    id <WiFiScanProvider> _scanProvider;
    id <WiFiLocationProvider> _locationProvider;
    NSObject<OS_dispatch_queue> *_queue;
    WiFiLexicon *_wifiLexicon;
}

@property (copy, nonatomic) NSSet *providers;
@property (copy, nonatomic) NSSet *sources;
@property (weak, nonatomic) id <WiFiScanProvider> scanProvider;
@property (weak, nonatomic) id <WiFiLocationProvider> locationProvider;
@property (retain, nonatomic) NSSet *availableNetworks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) WiFiLexicon *wifiLexicon;
@property (nonatomic) double availabilityMatchMaximumAge;
@property (copy, nonatomic) CDUnknownBlockType availabilityChangedCallback;

- (void)_setupProviderCallbacks:(id)arg1;
- (void)_setupSourceCallbacks:(id)arg1;
- (void)_handleScanResultCallback:(id)arg1 error:(id)arg2;
- (void)_handleWalletRelevancyAdded:(id)arg1 removed:(id)arg2;
- (void)_handle3BarsRelevancyAdded:(id)arg1 removed:(id)arg2;
- (id)_findExistingAvailabilityMatchForScannedNetwork:(id)arg1;
- (id)_findRelevantNetworkMatchForScannedNetwork:(id)arg1;
- (id)_createAvailabilityMatchForCandidate:(id)arg1 scannedNetwork:(id)arg2;
- (void)_findAvailabilityMatchesInSourcesForBSSIDS:(id)arg1;
- (void)_handleCandidateMatches:(id)arg1;
- (void)_removeStaleMatches;
- (id)findRecommendationsForScannedNetwork:(id)arg1;
- (id)initWithProviders:(id)arg1 sources:(id)arg2;
- (id)findRecommendationForScannedNetwork:(id)arg1;

@end
