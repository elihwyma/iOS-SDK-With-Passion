/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, TCPProgressProbe;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface LiveLinkObserver : NSObject

{
    int notifyToken;
    TCPProgressProbe *_tcpProgressProbe;
    NSDate *_timeOfProbeStart;
    NSObject<OS_dispatch_source> *progressProbeTimer;
    unsigned long long _iter;
    _Bool _localFlowsDisabled;
    _Bool _localFlowsEnabled;
    _Bool _premiumModeEnabled;
    NSString *_interfaceName;
    unsigned long long _tcpProgressScore;
}

@property (nonatomic, readonly) NSString *interfaceName;
@property (nonatomic, readonly) unsigned long long tcpProgressScore;
@property (nonatomic, readonly) _Bool premiumModeEnabled;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithInterfaceName:(id)arg1;
- (_Bool)stopTracking;
- (_Bool)startTracking;
- (unsigned long long)_assessProgressFromBaseline:(struct xtcpprogress_indicators *)arg1 toMetrics:(struct xtcpprogress_indicators *)arg2;
- (void)disablePremiumMode;
- (_Bool)attemptStartProgressProbe;
- (void)startProgressProbeTimerWithInterval:(unsigned long long)arg1 capWindowTo:(unsigned long long)arg2;
- (void)stopProgressProbeTimer;
- (void)_captureProgressWithInterval:(unsigned long long)arg1 capWindowTo:(unsigned long long)arg2;
- (void)postHasAdviceNotification:(_Bool)arg1;
- (void)enablePremiumMode;
- (_Bool)enableLocalFlowsTracking;
- (_Bool)disableLocalFlowsTracking;

@end
