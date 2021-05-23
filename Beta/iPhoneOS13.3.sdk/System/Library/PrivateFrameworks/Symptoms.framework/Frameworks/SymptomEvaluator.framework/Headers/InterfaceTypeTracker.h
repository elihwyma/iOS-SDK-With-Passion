/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NWUsageTargetSelector, NetworkAnalyticsStateRelay, TrackerPolicy;

@protocol flowDispositionObserver;

__attribute__((visibility("hidden")))
@interface InterfaceTypeTracker : NSObject

{
    NSArray *_alwaysNote;
    NSArray *_neverNote;
    NSArray *_daemonCheck;
    NSMutableDictionary *_trackerCache;
    long long _interfaceType;
    id <flowDispositionObserver> _observer;
    TrackerPolicy *_defaultPolicy;
    NWUsageTargetSelector *_targetFlowsNewWiFi;
    NetworkAnalyticsStateRelay *_stateRelay;
    NSDate *_madePrimaryDate;
}

@property (retain) NSArray *alwaysNote;
@property (retain) NSArray *neverNote;
@property (retain) NSArray *daemonCheck;
@property (retain) NSMutableDictionary *trackerCache;
@property long long interfaceType;
@property (retain) id <flowDispositionObserver> observer;
@property (retain) TrackerPolicy *defaultPolicy;
@property (retain) NWUsageTargetSelector *targetFlowsNewWiFi;
@property (retain) NetworkAnalyticsStateRelay *stateRelay;
@property (retain) NSDate *madePrimaryDate;

- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_dumpState;
- (void)noteFlow:(id)arg1 withDelegatee:(id)arg2 snapshot:(id)arg3;
- (void)noteFlow:(id)arg1 withOwner:(id)arg2 snapshot:(id)arg3;
- (void)configurePolicies:(id)arg1;
- (id)infoDir;
- (void)_trackerCachePrune;
- (void)removeLinkages:(id)arg1;
- (id)initWithInterfaceType:(long long)arg1;
- (void)getNetworkActivity:(CDUnknownBlockType)arg1;

@end
