/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSArray, NSMutableDictionary;

@protocol AWDLPeerProbeDelegate;

__attribute__((visibility("hidden")))
@interface AWDLPeerProbe : TestProbe

{
    id <AWDLPeerProbeDelegate> _delegate;
    unsigned long long _pollCount;
    NSMutableDictionary *_peerList;
    NSArray *_servicesOfInterest;
}

@property (retain, nonatomic) NSArray *servicesOfInterest;
@property (retain) id <AWDLPeerProbeDelegate> delegate;
@property unsigned long long pollCount;
@property (retain) NSMutableDictionary *peerList;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)stopTest;
- (void)periodicTimerFired:(id)arg1;
- (void)startAWDLPeerPollingForServices:(id)arg1 withCount:(unsigned long long)arg2 interval:(unsigned long long)arg3;

@end
