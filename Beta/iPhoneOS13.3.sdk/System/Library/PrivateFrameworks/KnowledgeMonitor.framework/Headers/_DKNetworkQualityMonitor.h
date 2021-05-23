/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSArray, NSMutableDictionary, NSObject, NWNetworkOfInterest, NWNetworkOfInterestManager, _CDContextualKeyPath;

@protocol OS_dispatch_queue;

@interface _DKNetworkQualityMonitor : _DKMonitor

{
    _Bool _initialized;
    _Bool _enabled;
    NSArray *_noiKeyPaths;
    NSObject<OS_dispatch_queue> *_noiManagerQueue;
    NWNetworkOfInterestManager *_noiManager;
    NWNetworkOfInterest *_noi;
    long long _previousQuality;
    long long _interfaceType;
    _CDContextualKeyPath *_qualityKeyPath;
    _CDContextualKeyPath *_predictedQualityKeyPath;
    _CDContextualKeyPath *_discretionaryInvitedKeyPath;
    _CDContextualKeyPath *_statusKeyPath;
    NSMutableDictionary *_statusDictionary;
}

@property (retain, nonatomic) NSArray *noiKeyPaths;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noiManagerQueue;
@property (retain, nonatomic) NWNetworkOfInterestManager *noiManager;
@property (retain, nonatomic) NWNetworkOfInterest *noi;
@property (nonatomic) long long previousQuality;
@property (nonatomic) long long interfaceType;
@property (retain, nonatomic) _CDContextualKeyPath *qualityKeyPath;
@property (retain, nonatomic) _CDContextualKeyPath *predictedQualityKeyPath;
@property (retain, nonatomic) _CDContextualKeyPath *discretionaryInvitedKeyPath;
@property (retain, nonatomic) _CDContextualKeyPath *statusKeyPath;
@property (retain, nonatomic) NSMutableDictionary *statusDictionary;
@property (nonatomic) _Bool initialized;
@property (nonatomic) _Bool enabled;

+ (id)entitlements;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (id)loadState;
- (void)didStopTrackingNOI:(id)arg1;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)saveState;
- (id)predictionTimelineFromNOIPredictions:(id)arg1;
- (void)updateInstantQuality;
- (void)updatePredictionAsync;
- (void)updateDiscretionaryTrafficInvited;
- (void)updatePowerCostDL;
- (void)updatePowerCostUL;
- (id)initForInterfaceType:(long long)arg1 connectionStatusKeyPath:(id)arg2 qualityKeyPath:(id)arg3 predictedQualityKeyPath:(id)arg4 discretionaryInvitedPath:(id)arg5;

@end
