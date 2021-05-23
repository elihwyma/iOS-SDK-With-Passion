/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFLazy, NSHashTable, NSString;

@interface FCNetworkReachability : NSObject

{
    _Bool _isNetworkReachable;
    _Bool _isNetworkReachableViaWiFi;
    _Bool _isLowDataModeEnabled;
    _Bool _isNetworkUsageExpensive;
    _Bool _isNetworkReachableViaCellular;
    _Bool _isCloudKitAccessAllowed;
    _Bool _accessRestrictedBecauseOfAppVersion;
    _Bool _accessRestrictedBecauseOfOSVersion;
    _Bool _accessRestrictedBecauseOfCountry;
    _Bool _accessRestrictedBecauseOfDeviceAbandoned;
    long long _offlineReason;
    NSHashTable *_observers;
    NFLazy *_networkInfo;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) _Bool isNetworkReachable;
@property (nonatomic) _Bool isNetworkReachableViaWiFi;
@property (nonatomic) _Bool isNetworkReachableViaCellular;
@property (nonatomic) _Bool isNetworkUsageExpensive;
@property (nonatomic) _Bool isLowDataModeEnabled;
@property (nonatomic) _Bool isCloudKitAccessAllowed;
@property (nonatomic) _Bool accessRestrictedBecauseOfAppVersion;
@property (nonatomic) _Bool accessRestrictedBecauseOfOSVersion;
@property (nonatomic) _Bool accessRestrictedBecauseOfCountry;
@property (nonatomic) _Bool accessRestrictedBecauseOfDeviceAbandoned;
@property (retain, nonatomic) NFLazy *networkInfo;
@property (nonatomic, readonly) _Bool isNetworkOnlyReachableViaCellular;
@property (nonatomic, readonly) long long reachabilityStatus;
@property (nonatomic, readonly) long long cellularRadioAccessTechnology;
@property (nonatomic, readonly) _Bool isCloudKitReachable;
@property (nonatomic) long long offlineReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedNetworkReachability;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_updateReachability;
- (long long)_cellularRadioAccessTechnologyFromString:(id)arg1;
- (void)_accessRestrictionsChanged;

@end
