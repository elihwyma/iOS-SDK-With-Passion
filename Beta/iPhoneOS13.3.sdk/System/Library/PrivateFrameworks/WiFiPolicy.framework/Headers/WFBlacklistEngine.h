/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol WFBlacklistDelegate;

@interface WFBlacklistEngine : NSObject

{
    unsigned long long _profile;
    NSMutableArray *_blacklist;
    _Bool _enabled;
    id <WFBlacklistDelegate> _blacklistDelegate;
    NSMutableArray *_ssidThresholds;
    NSMutableArray *_bssidThresholds;
    double _wowBlacklistExpiry;
    double _autojoinBlacklistExpiry;
}

@property (nonatomic) id <WFBlacklistDelegate> blacklistDelegate;
@property _Bool enabled;
@property (retain) NSMutableArray *ssidThresholds;
@property (retain) NSMutableArray *bssidThresholds;
@property double wowBlacklistExpiry;
@property double autojoinBlacklistExpiry;

+ (id)stringRepresentationWithReason:(unsigned long long)arg1;
+ (id)stringRepresentationWithState:(unsigned long long)arg1;

- (void)dealloc;
- (void)setDefaultBlacklistThresholds;
- (id)_findBlacklistNode:(id)arg1;
- (_Bool)_ignoreTriggersForDeviceProfile:(unsigned long long)arg1 node:(id)arg2;
- (_Bool)_evaluateTriggersForBlacklisting:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 ssid:(id)arg5 state:(unsigned long long)arg6;
- (void)_printBlacklist;
- (void)setTriggerForNetworkWithReasonAndState:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 state:(unsigned long long)arg5;
- (_Bool)_meetsThresholds:(unsigned long long)arg1 count:(unsigned int)arg2 perSsid:(_Bool)arg3 bssid:(id)arg4 ssid:(id)arg5;
- (void)_setBlacklistedState:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4;
- (_Bool)isNetworkInBlacklistedState:(id)arg1 state:(unsigned long long)arg2;
- (void)removeBlacklistedStates;
- (_Bool)_evaluateTriggersForUnblacklisting:(id)arg1 unblacklistReason:(unsigned long long)arg2 ssid:(id)arg3;
- (id)initWithBlacklistDelegate:(id)arg1 profile:(unsigned long long)arg2;
- (void)configureBlacklistedStateExpiryIntervalInSec:(double)arg1 state:(unsigned long long)arg2;
- (_Bool)changeBlacklistingThresholds:(unsigned long long)arg1 value:(unsigned int)arg2 perSsid:(_Bool)arg3;
- (void)setTriggerForNetworkWithReason:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4;
- (_Bool)removeBlacklistedStateForNetworkWithReason:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)removeBlacklistedStateWithUnblacklistType:(unsigned long long)arg1;
- (void)removeExpiredBlacklistedState:(unsigned long long)arg1;
- (void)clearTriggerForNetworkWithUnblacklistReason:(id)arg1 reason:(unsigned long long)arg2;
- (id)retrieveNetworksInBlacklistedState:(unsigned long long)arg1;
- (id)retrieveNetworksInBlacklistedStateHistory:(unsigned long long)arg1;
- (id)retrieveBlacklistedStateHistoryForNetwork:(id)arg1 state:(unsigned long long)arg2 timestamps:(id)arg3 reasonData:(id)arg4;
- (id)retrieveReasonsForNetworkInBlacklistedState:(id)arg1 state:(unsigned long long)arg2 timestamps:(id)arg3 reasonData:(id)arg4;
- (long long)getRssiWhenNetworkWasBlacklisted:(id)arg1;
- (_Bool)isNetworkBlacklistedForAutoJoinDueToTrigDisc:(id)arg1 rssi:(long long *)arg2 timestamp:(double *)arg3;
- (id)retrieveBlacklistedNetworkSsids:(unsigned long long)arg1;
- (unsigned long long)getBlacklistedNetworkCount;
- (id)getBlacklist;
- (id)getNodeFromBlacklist:(id)arg1;

@end
