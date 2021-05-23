/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NWNetworkOfInterest, NWNetworkOfInterestManager, VCDispatchTimer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCWifiAssistManager : NSObject

{
    _Bool _userPrefered;
    _Bool _inBudget;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_delegates;
    VCDispatchTimer *_refreshTimer;
    NWNetworkOfInterestManager *_manager;
    NWNetworkOfInterest *_wifiNOI;
    _Bool _respectBudgetStatusEnabled;
}

@property (readonly) _Bool isAvailable;
@property (readonly) unsigned char wifiAssistState;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (void)didStartTrackingNOI:(id)arg1;
- (void)queryUserPreference;
- (void)queryBudget;
- (void)refreshBudget;

@end
