/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSMutableDictionary, NSObject;

@protocol BonjourProbeDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BonjourProbe : TestProbe

{
    struct BonjourBrowser *bonjourManagerRef;
    _Bool _includeAWDL;
    id <BonjourProbeDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_scanQueue;
    NSMutableDictionary *_currentlyDiscoveredServices;
    NSMutableDictionary *_allDiscoveredServices;
    NSMutableDictionary *_resolvers;
    NSObject<OS_dispatch_source> *_bonjourBrowserTimer;
    double _bonjourBrowserTimerDuration;
    struct _DNSServiceRef_t *_dnsRef;
}

@property (retain, nonatomic) NSMutableDictionary *resolvers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *bonjourBrowserTimer;
@property (nonatomic) double bonjourBrowserTimerDuration;
@property (nonatomic) struct _DNSServiceRef_t *dnsRef;
@property (retain) id <BonjourProbeDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueue;
@property _Bool includeAWDL;
@property (retain, nonatomic) NSMutableDictionary *currentlyDiscoveredServices;
@property (retain, nonatomic) NSMutableDictionary *allDiscoveredServices;

- (id)initWithQueue:(id)arg1;
- (void)stopTest;
- (void)cancelTest:(CDUnknownBlockType)arg1;
- (_Bool)loadBonjourSymbols;
- (void)stopAllResolvers;
- (void)startBonjourScanForService:(id)arg1 onInterfaceNamed:(id)arg2;
- (void)dnsResolver:(id)arg1 encounteredDNSError:(int)arg2;

@end
