/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol WFBlacklistNetwork;

@interface WFBlackListNode : NSObject

{
    _Bool _enterprisePolicy;
    id <WFBlacklistNetwork> _networkDelegate;
    NSMutableArray *_blacklistTriggers;
    NSMutableArray *_blacklistedStatesCurrent;
    NSMutableArray *_blacklistedStatesHistory;
}

@property (retain) id <WFBlacklistNetwork> networkDelegate;
@property (retain) NSMutableArray *blacklistTriggers;
@property (retain) NSMutableArray *blacklistedStatesCurrent;
@property (retain) NSMutableArray *blacklistedStatesHistory;
@property _Bool enterprisePolicy;

- (void)dealloc;
- (void)addBlacklistedState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3;
- (id)initWithBlacklistNetwork:(id)arg1;
- (void)addBlacklistTrigger:(unsigned long long)arg1 reasonData:(long long)arg2 bssid:(id)arg3;
- (void)addBlacklistedStateHistory:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4;
- (_Bool)containsNetwork:(id)arg1;
- (_Bool)hasBlacklistedState:(unsigned long long)arg1;
- (id)_copyCreateBlacklistedState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3;
- (_Bool)updateNetwork:(id)arg1;

@end
